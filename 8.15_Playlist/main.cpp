#include <iostream>

#include "PlaylistNode.h"


/*
 * THIS WILL NOT WORK BECAUSE THE InsertAfter() method works differently than here.
 * MUST uncomment code in InsertAfter() for this to work
 * I might fix this later idk :\
 */


void PrintMenu(const std::string playlistTitle) {
    /* Type your code here */
    std::cout << playlistTitle << " PLAYLIST MENU" << std::endl;
    std::cout << "a - Add song" << std::endl;
    std::cout << "d - Remove song" << std::endl;
    std::cout << "c - Change position of song" << std::endl;
    std::cout << "s - Output songs by specific artist" << std::endl;
    std::cout << "t - Output total time of playlist (in seconds)" << std::endl;
    std::cout << "o - Output full playlist" << std::endl;
    std::cout << "q - Quit" << std::endl
                            << std::endl;

}

void MoveNode(PlaylistNode*& headNode, int currentPos, int newPos) {
    if (headNode == nullptr) {
        // The list is empty, nothing to move
        return;
    }

    // Handle invalid positions by assuming the first or last node
    if (currentPos < 1) {
        currentPos = 1;
    }
    if (newPos < 1) {
        newPos = 1;
    }

    // Traverse the list to find the current node and its predecessor
    PlaylistNode* current = headNode;
    PlaylistNode* prev = nullptr;
    int currentPosition = 1;

    while (currentPosition < currentPos && current->GetNext() != nullptr) {
        prev = current;
        current = current->GetNext();
        currentPosition++;
    }

    // If currentPos is greater than the length of the list, assume the end
    if (currentPos > currentPosition) {
        currentPos = currentPosition;
        newPos = currentPosition + 1;
    }

    // Remove the current node from its current position
    if (prev != nullptr) {
        prev->SetNext(current->GetNext());
    } else {
        headNode = current->GetNext();  // Updating headNode if it's the first node
    }

    // Insert the current node at the new position
    if (newPos == 1) {
        current->SetNext(headNode);
        headNode = current; // Update the new head if needed
    } else {
        // Traverse to the node at newPos - 1
        currentPosition = 1;
        current = headNode;

        while (currentPosition < newPos - 1 && current->GetNext() != nullptr) {
            current = current->GetNext();
            currentPosition++;
        }

        // Insert the current node after the node at newPos - 1
        current->SetNext(current->GetNext());
        current->SetNext(current);
    }
}



PlaylistNode* ExecuteMenu(char option, std::string playlistTitle, PlaylistNode* headNode) {
    /* Type your code here */

    // Add song
    if (option == 'a')
    {
        std::cin.ignore();
        std::cout << "ADD SONG" << std::endl;
        std::string id, song, artist;
        int length;

        // Get user input:
        std::cout << "Enter song's unique ID:" << std::endl;
        std::getline(std::cin, id);
        std::cout << "Enter song's name:" << std::endl;
        std::getline(std::cin, song);
        std::cout << "Enter artist's name:" << std::endl;
        std::getline(std::cin, artist);
        std::cout << "Enter song's length (in seconds):" << std::endl;
        std::cin >> length;
        std::cout << std::endl;

        PlaylistNode* newNode = new PlaylistNode(id, song, artist, length);
        PlaylistNode* endNode = headNode;

        // Find end node:
        if (headNode == nullptr)
            headNode = newNode;
        else
        {
            while (endNode->GetNext() != nullptr)
                endNode = endNode->GetNext();

            endNode->SetNext(newNode);
        }
    }

    // Remove song
    else if (option == 'd')
    {
        std::cin.ignore();
        std::cout << "REMOVE SONG" << std::endl;

        // Get user input
        std::string id;
        std::cout << "Enter song's unique ID:" << std::endl;
        std::getline(std::cin, id);

        // List is empty: do nothing
        if (headNode == nullptr)
        {
            return headNode;
        }

        // List has one element: remove it
        if (headNode->GetNext() == nullptr)
        {
            std::cout << "\"" << headNode->GetSongName() << "\" removed." << std::endl
                        << std::endl;
            delete headNode;
            headNode = nullptr;
            return headNode;
        }

        PlaylistNode* before = headNode;
        while (before->GetNext() != nullptr)
        {
            // If next node is to be removed
            if (before->GetNext()->GetID() == id)
            {
                std::cout << "\"" << before->GetNext()->GetSongName() << "\" removed." << std::endl
                            << std::endl;
                PlaylistNode* current = before->GetNext();
                PlaylistNode* after = current->GetNext();      // This may be nullptr, but that's ok
                delete current;
                before->SetNextToNullptr();
                before->SetNext(after);

                break;
            }

            before = before->GetNext();
        }

        return headNode;
    }

    // Change position of a song
    else if (option == 'c')
    {
        std::cin.ignore();
        std::cout << "CHANGE POSITION OF SONG" << std::endl;

        // Get user input
        int currentPos, newPos;
        std::cout << "Enter song's current position:" << std::endl;
        std::cin >> currentPos;
        std::cout << "Enter new position for song:" << std::endl;
        std::cin >> newPos;


        // List is empty: do nothing
        if (headNode == nullptr)
        {
            return headNode;
        }
        // List has 1 element: print and do nothing
        if (headNode->GetNext() == nullptr)
        {
            std::cout << "\"" << headNode->GetSongName() << "\" moved to position " << newPos << std::endl
                        << std::endl;
            return headNode;
        }

        PlaylistNode* before = headNode;    // Stores PlaylistNode before currentNode
        PlaylistNode* currentNode;          // Stores PlaylistNode at currentPos

        // If retrieving first (head) node
        if (currentPos == 1)
        {
            // Remove head node and store in currentNode
            currentNode = headNode;
            headNode = currentNode->GetNext();
            currentNode->SetNextToNullptr();
        }
        // If retrieving a different node
        else
        {
            currentNode = headNode->GetNext();

            // Loop through list until at the end or at currentPos, whichever comes first
            for (int i = 2; currentNode->GetNext() != nullptr && i != currentPos; ++i)
            {
                before = currentNode;
                currentNode = currentNode->GetNext();
            }

            // Remove currentNode in list by connecting before to the node after currentNode
            PlaylistNode* after = currentNode->GetNext();
            before->SetNextToNullptr();             // Temporarily make before the end
            before->SetNext(after);         // add after back to end after before
            currentNode->SetNextToNullptr();
        }

        // At this point, currentNode isn't in the list and "before" points to what was before the currentNode
        // The list was shortened by 1 after the currentPos, so:
        if (currentPos < newPos)
        {
//            --newPos;
        }
        else if (currentPos == newPos)
        {
            currentNode->InsertAfter(before);
            std::cout << "\"" << currentNode->GetSongName() << "\" moved to position " << newPos << std::endl
                        << std::endl;
            return headNode;
        }

        if (newPos <= 1)
        {
            // Insert currentNode at list front
            newPos = 1;
            currentNode->SetNext(headNode);
            std::cout << "\"" << currentNode->GetSongName() << "\" moved to position " << newPos << std::endl
                        << std::endl;
            return currentNode;
        }

        // "before" will now be used to find the node that goes before the newPos
        before = headNode;
        for (int i = 1; before->GetNext() != nullptr && i != newPos - 1; ++i)
        {
            before = before->GetNext();
        }

        currentNode->InsertAfter(before);
        std::cout << "\"" << currentNode->GetSongName() << "\" moved to position " << newPos << std::endl
                    << std::endl;
        return headNode;
    }

    // Output songs by specific artist
    else if (option == 's')
    {
        std::cin.ignore();
        std::cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << std::endl;

        // Get user input
        std::string name;
        std::cout << "Enter artist's name:" << std::endl;
        std::getline(std::cin, name);

        // Loop through all nodes:
        PlaylistNode* curr = headNode;
        for (int i = 1; curr != nullptr; ++i)
        {
            if (curr->GetArtistName() == name)
            {
                std::cout << std::endl
                            << i << '.' << std::endl;
                curr->PrintPlaylistNode();
            }
            curr = curr->GetNext();
        }
        std::cout << std::endl;
    }

    else if (option == 't')
    {
        std::cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << std::endl;
        int time = 0;

        PlaylistNode* curr = headNode;
        while (curr != nullptr)
        {
            time += curr->GetSongLength();
            curr = curr->GetNext();
        }

        std::cout << "Total time: " << time << " seconds" << std::endl
                    << std::endl;
    }

    // Output full playlist
    else if (option == 'o')
    {
        std::cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << std::endl;

        if (headNode == nullptr)
        {
            std::cout << "Playlist is empty" << std::endl
                        << std::endl;
            return headNode;
        }

        PlaylistNode* curr = headNode;
        for (int i = 1; curr != nullptr; ++i)
        {
            std::cout << i << '.' << std::endl;
            curr->PrintPlaylistNode();
            std::cout << std::endl;
            curr = curr->GetNext();
        }
    }

    return headNode;
}


int main()
{
    std::string title;

    std::cout << "Enter playlist's title:" << std::endl;
    std::getline(std::cin, title);

    std::cout << std::endl;
//    PrintMenu(title);

    PlaylistNode* head = nullptr;

    while (true)
    {
//        std::cout << std::endl;
        PrintMenu(title);
        char choice;
        std::cout << "Choose an option:" << std::endl;
        std::cin >> choice;

        while (!(choice == 'a' || choice == 'd' || choice == 'c' || choice == 's' || choice == 't' || choice == 'o' || choice == 'q'))
        {
            std::cout << "Choose an option:" << std::endl;
            std::cin >> choice;
        }

        if (choice == 'q')
        {
            break;
        }

        head = ExecuteMenu(choice, title, head);
    }

    return 0;
}
