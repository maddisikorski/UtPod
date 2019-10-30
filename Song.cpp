
//
// Created by Sarah Orsak on 10/21/2019.
//

#include "Song.h"
using namespace std;

//Default constructor
//Sets the artist and title to blank string, size to 0
Song::Song(){
    artist = "";
    title = "";
    size = 0;
}

//Constructor with artist, title, and size parameter
//The user of the class will pass in a artist, title, size.
Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
    size = _size;
}

//sets title to the parameter passed in by the user
void Song::setTitle(string _title)
{
    title = _title;
}

//sets artist to the parameter passed in by the user
void Song::setArtist(string _artist)
{
    artist = _artist;
}

//sets size to the parameter passed in by the user
void Song::setSize(int _size)
{
    size = _size;
}

//makes the title able to access in other classes
string Song::getTitle() const
{
    return title;
}

//makes the artist able to access in other classes
string Song::getArtist() const
{
    return artist;
}

//makes the size able to access in other classes
int Song::getSize() const
{
    return size;
}

//sets the equivalent operator to check if the artist, title and size are equivalent in one to song to another's
//We do this because you can't compare the song class directly. We have to overload the operators
bool Song::operator==(const Song &s){
    return (title== s.getTitle() &&
            artist== s.getArtist() &&
            size == s.getSize());
}

//checks to see if the artist of one is less than the artist of another, title of one is less than another, and size of
//one is less than the other.
//We do this because you can't compare the song class directly. We have to overload the operators
bool Song::operator<(const Song &s){
    if (artist != s.getArtist()){
        return (artist < s.getArtist());
    }
    else if (title != s.getTitle()){
        return (title < s.getTitle());
    }
    else if (size != s.getSize()){
        return (size < s.getSize());
    }
    else {
        return false;
    }
}

//checks to see if the artist of one is greater than the artist of another, title of one is greater than another, and
// size of one is greater than the other.
//We do this because you can't compare the song class directly. We have to overload the operators
bool Song::operator>(const Song &s){
    if (artist != s.getArtist()){
        return (artist > s.getArtist());
    }
    else if (title != s.getTitle()){
        return (title > s.getTitle());
    }
    else if (size != s.getSize()){
        return (size > s.getSize());
    }
    else {
        return false;
    }
}