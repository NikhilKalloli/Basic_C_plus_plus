#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do-nothing function ---> Pure virrtual function
};

class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r) // Constructor in derived class
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an Amazing video with title " << title << endl;
        cout << "Ratings: " << rating << "out of 5 stars" << endl;
        cout << "Length of this video is " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) // Constructor in derived class
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an Amazing video with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << "out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code with Harry Video
    title = "Django tutorial";
    vlen = 7.56;
    rating = 4.57;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();

    // for Code with Harry Video
    title = "Django tutorial Text";
    words = 652;
    rating = 4.7;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
/* Rules for virtual functions:
 1. They cannot be static
 2. They are accessed by object pointers.
 3. Virtual functions can be a friend of another class
 4. A function in base class might not be used.
 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/