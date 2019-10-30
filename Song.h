//
// Created by Sarah Orsak on 10/21/2019.
//

#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>
using namespace std;

//Song class declaration
class Song {
private:
    string title;
    string artist;
    int size;

public:
    //Default constructor
    //Sets the artist and title to blank string, size to 0
    Song();

    //Constructor with artist, title, and size parameter
    //The user of the class will pass in a artist, title, size.
    Song(string _artist, string _title, int _size);

    //sets title to the parameter passed in by the user
    void setTitle(string _title);

    //sets artist to the parameter passed in by the user
    void setArtist(string _artist);

    //sets size to the parameter passed in by the user
    void setSize(int _size);

    //makes the title able to access in other classes
    string getTitle() const;

    //makes the artist able to access in other classes
    string getArtist() const;

    //makes the size able to access in other classes
    int getSize() const;

    //sets the equivalent operator to check if the artist, title and size are equivalent in one to song to another's
    //We do this because you can't compare the song class directly. We have to overload the operators
    bool operator==(const Song &s);

    //checks to see if the artist of one is greater than the artist of another, title of one is greater than another, and
    // size of one is greater than the other.
    //We do this because you can't compare the song class directly. We have to overload the operators
    bool operator>(const Song &s);


    //checks to see if the artist of one is less than the artist of another, title of one is less than another, and size of
    //one is less than the other.
    //We do this because you can't compare the song class directly. We have to overload the operators
    bool operator<(const Song &s);
};


#endif //SONG_H