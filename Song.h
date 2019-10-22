//
// Created by Sarah Orsak on 10/21/2019.
//

#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    int size;

public:
    Song();

    Song(string _title, string _artist, int _size);

    void setTitle(string _title);

    void setArtist(string _artist);

    void setSize(int _size);

    string getTitle() const;

    string getArtist() const;

    int getSize() const;

    bool operator==(const Song &b);

    bool operator>(const Song &b);

    bool operator<(const Song &b);
};


#endif //SONG_H
