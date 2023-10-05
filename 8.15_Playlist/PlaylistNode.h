/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.15 Playlist
 */


#ifndef INC_8_15_PLAYLIST_PLAYLISTNODE_H
#define INC_8_15_PLAYLIST_PLAYLISTNODE_H


#include <string>

class PlaylistNode
{
public:

    PlaylistNode();

    PlaylistNode(const std::string& id, const std::string& songName, const std::string& artistName, int songLength);

    const std::string& GetID() const;

    const std::string& GetSongName() const;

    const std::string& GetArtistName() const;

    int GetSongLength() const;

    /// @returns a pointer to the node after *this.
    /// @note Returns nullptr if this is the last node in this list
    PlaylistNode* GetNext();

    /// Inserts *this node after *nodePtr.
    /// @param nodePtr - Pointer to node to insert *this after
    void InsertAfter(PlaylistNode* nodePtr);

    /// Sets the next node after *this to *nodePtr
    /// @param nodePtr - Pointer to node to insert after *this
    void SetNext(PlaylistNode* nodePtr);

    /// Prints information about this node
    void PrintPlaylistNode() const;

    /// Use this to inform this node that it is the last one
    void SetNextToNullptr();

private:

    std::string uniqueId;

    std::string songName;

    std::string artistName;

    int songLength;

    PlaylistNode* nextNodePtr;
};


#endif // INC_8_15_PLAYLIST_PLAYLISTNODE_H
