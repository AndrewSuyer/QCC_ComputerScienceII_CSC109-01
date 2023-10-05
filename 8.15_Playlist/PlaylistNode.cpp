/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.15 Playlist
 */


#include <iostream>
#include "PlaylistNode.h"


PlaylistNode::PlaylistNode() :
    uniqueId("none"), songName("none"), artistName("none"), songLength(0), nextNodePtr(nullptr)
{

}


PlaylistNode::PlaylistNode(const std::string& id, const std::string& songName, const std::string& artistName, int songLength) :
    uniqueId(id), songName(songName), artistName(artistName), songLength(songLength), nextNodePtr(nullptr)
{

}


const std::string &PlaylistNode::GetID() const
{
    return uniqueId;
}


const std::string &PlaylistNode::GetSongName() const
{
    return songName;
}


const std::string &PlaylistNode::GetArtistName() const
{
    return artistName;
}


int PlaylistNode::GetSongLength() const
{
    return songLength;
}


PlaylistNode* PlaylistNode::GetNext()
{
    return this->nextNodePtr;
}


void PlaylistNode::InsertAfter(PlaylistNode *nodePtr)
{
//    if (nodePtr->nextNodePtr == nullptr)
//    {
//        nodePtr->nextNodePtr = this;
//        return;
//    }
//
//    PlaylistNode* temp = nodePtr->nextNodePtr;
//    nodePtr->nextNodePtr = this;
//    this->nextNodePtr = temp;

    PlaylistNode* temp = this->nextNodePtr;
    this->nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = temp;
}


void PlaylistNode::SetNext(PlaylistNode *nodePtr)
{
    if (this->nextNodePtr == nullptr)
    {
        this->nextNodePtr = nodePtr;
        return;
    }

    PlaylistNode* temp = this->nextNodePtr;
    this->nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = temp;
}


void PlaylistNode::PrintPlaylistNode() const
{
    std::cout << "Unique ID: " << uniqueId << std::endl;
    std::cout << "Song Name: " << songName << std::endl;
    std::cout << "Artist Name: " << artistName << std::endl;
    std::cout << "Song Length (in seconds): " << songLength << std::endl;
}


void PlaylistNode::SetNextToNullptr()
{
    this->nextNodePtr = nullptr;
}
