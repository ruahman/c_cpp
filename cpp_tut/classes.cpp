
#include <iostream>
#include "classes.h"

using namespace std;

class Book {
  private:
    int cost;
  public:
    string title;
    string author;
    int pages;
    Book() {
      cout << "book constructor" << endl;
      cost = 777;
    }
    Book(int aPage){
      pages = aPage;
      cost = 333;
    }

    bool isBig(){
      return pages > 10;
    }

    int getCost(){
      return cost;
    }
};

class Chef {
  public:
    void makeChicken(){
      cout << "chef makes chicken" << endl;
    }
};

class ItalianChef: public Chef {
  public:  
    string makePasta(){
      return "make pasta";
    }
};

void classes_demo(){
  cout << "***** classes demo *****" << endl;
  Book book1;
  book1.title = "asdfaf";
  book1.author = "foobar";
  book1.pages = 23;

  Book book2 = Book(23);

  ItalianChef iChef;

  cout << "book1.title: " << book1.title << endl;
  cout << "book2.pages: " << book2.pages << endl;
  cout << "book2.isBig(): " << book2.isBig() << endl;
  cout << "book2.getCost(): " << book2.getCost() << endl;
  cout << "iChef.makePasta(): " << iChef.makePasta() << endl;
}
