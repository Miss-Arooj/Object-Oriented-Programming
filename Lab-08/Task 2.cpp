#include<iostream>
#include<cstring>
using namespace std;

class Author {
	string name, email;
	char gender;
public:
	Author();
	Author(const string& name, const string& email, char gender);
	string getName() const;
	string getEmail() const;
	void setEmail(const string& email);
	char getGender() const;
	void print() const;
};

Author::Author() {
	
}
Author::Author(const string& name, const string& email, char gender) {
	this->name = name;
	this->email = email;
	this->gender = gender;
}
string Author::getName() const{
	return name;
}
string Author::getEmail() const {
	return email;
}
void Author::setEmail(const string& email) {
	this->email = email;
}
char Author::getGender() const {
	return gender;
}
void Author::print() const {
	cout <<endl<< "------Author Details------"<<endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Gender: " << gender << endl;
}

class Book {
	string name;
	Author author;
	double price;
	int qtyInstock = 0;
public:
	Book(string, Author, double, int);
	string getName();
	Author getAuthor();
	double getPrice();
	void setPrice(double);
	int getQtyInstock();
	void setQtyInstock(int);
	void print();
	string getAuthorName();
};

Book::Book(string name, Author author, double price, int qtyInstock) {
	this->name = name;
	this->author = author;
	this->price = price;
	this->qtyInstock = qtyInstock;
}
string Book::getName() {
	return name;
}
Author Book::getAuthor() {
	return author;
}
double Book::getPrice() {
	return price;
}
void Book::setPrice(double price) {
	this->price = price;
}
int Book::getQtyInstock() {
	return qtyInstock;
}
void Book::setQtyInstock(int qtyInstock) {
	this->qtyInstock = qtyInstock;
}
void Book::print() {
	cout <<endl<< "------Book Details------"<<endl;
	cout << "Name: " << name << endl;
	cout << "Author: " << author.getName() << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << qtyInstock << endl;
}
string Book::getAuthorName() {
	return author.getName();
}
int main() {
		// Declare and construct an instance of Author
		Author peter("Peter Jones" , "peter@somewhere.com" ,'m');
		peter.print(); // Peter Jones (m) at peter@somewhere.com
		// Declare and construct an instance of Book
		Book book("C++ for Dummies", peter,12000, 19.99);

		book.print();
		// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
		peter.setEmail("peter@xyz");
		peter.print(); // Peter Jones (m) at peter@xyz.com
		book.print();
		// 'C++ for Dummies'; by Peter Jones (m) at peter@somewhere.com
		book.getAuthor().setEmail("peter@abc.com");
		book.print();
		// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
	return 0;
}