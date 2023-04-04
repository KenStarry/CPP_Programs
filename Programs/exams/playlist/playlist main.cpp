//
// Created by kenne on 4/3/2023.
//
#include <iostream>
#include <queue>
#include "Playlist.h"

using namespace std;

class Playlist {

private:
    queue<string> playlist;

public:

    //  getter for playlist
    queue<string> getPlaylist() {
        return playlist;
    }

    //  add item to playlist
    void addSongToPlaylist(string song) {
        getPlaylist().emplace(song);
    }

    //  remove and display the first song
    string popFrontSong() {
        string firstSong;

        if (!getPlaylist().empty()) {
            firstSong = getPlaylist().front();
            getPlaylist().pop();
            return firstSong;
        } else {
            return "Empty playlist";
        }
    }

    // display first song
    string frontSong() {
        if (!getPlaylist().empty()) {
            return getPlaylist().front();
        } else {
            return "Empty playlist";
        }
    }

    //  check number of songs
    int totalSongs() {
        return getPlaylist().size();
    }

    //  clear all songs from the playlist
    void clearPlaylist() {
        if (!getPlaylist().empty()) {
            for (int i = 0; i < getPlaylist().size(); i++) {
                getPlaylist().pop();
            }
        }
    }

    //  display all songs
    void displaySongs() {

        cout << "first" << playlist.front();
//        queue<string> playlistCopy = getPlaylist();
//
//        while (!playlistCopy.empty()) {
//            cout << playlistCopy.front();
//            playlistCopy.pop();
//        }
    }

};

int main() {

    Playlist p;

    p.addSongToPlaylist("Kenny");
    p.displaySongs();

//    for (int i = 0; i < 5; i++) {
//        string song;
//
//        cout << "Add song : ";
//        getline(cin, song);
//
//        p.addSongToPlaylist(song);
//        cout << "Total songs in loop = " << p.totalSongs();
//    }
//
//    p.displaySongs();

    return 0;
}

















































