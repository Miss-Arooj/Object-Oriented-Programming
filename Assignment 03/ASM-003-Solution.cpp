#include<iostream>
#include<string>
using namespace std;

class Decoder {
private:
	string message;
public:
	Decoder(string m) {
		message = m;
	}
	void setMessage() {
		string m;
		cout << "Enter Encrypted Message: ";
		getline(cin, m);
		message = m;
	}
	string getMessage() {
		return message;
	}
	void Decode() {
		for (int i = 0; message[i] != '\0'; i++) {
			if (message[i] >= 'f' && message[i] <= 'z') {
				message[i] = message[i] - 5;
			}
			else if (message[i] == 'a') {
				message[i] = message[i] + ('v' - 'a');
			}
			else if (message[i] == 'b') {
				message[i] = message[i] + ('w' - 'b');
			}
			else if (message[i] == 'c') {
				message[i] = message[i] + ('x' - 'c');
			}
			else if (message[i] == 'd') {
				message[i] = message[i] + ('y' - 'd');
			}
			else if (message[i] == 'e') {
				message[i] = message[i] + ('z' - 'e');
			}
			else if (message[i] >= 'F' && message[i] <= 'Z') {
				message[i] = message[i] - 5;
			}
			else if (message[i] == 'A') {
				message[i] = message[i] + ('V' - 'A');
			}
			else if (message[i] == 'B') {
				message[i] = message[i] + ('W' - 'B');
			}
			else if (message[i] == 'C') {
				message[i] = message[i] + ('X' - 'C');
			}
			else if (message[i] == 'D') {
				message[i] = message[i] + ('Y' - 'D');
			}
			else if (message[i] == 'E') {
				message[i] = message[i] + ('Z' - 'E');
			}
		}
		cout << "Decoded message: " << message << endl;
	}
};

class SuperDecoder : public Decoder {
private:
	string message;
public:
	SuperDecoder(string m):Decoder(m) {

	}
	void setMessage() {
		Decoder::setMessage();
		//message = Decoder::getMessage();  //in order to calculate vowels, non-vowels and count of encrypted string.
	}
	void Decode() {
		Decoder::Decode();
		message = Decoder::getMessage(); // in order to calculate vowels, non-vowels and count of decoded string.
	}
	void CountWords() {
		int words=0;
		for (int i = 0;message[i] != '\0';i++) {
			if (message[i] != 32) {
				words++;
			}
		}
		cout << "Number of words in string: " << words;
	}
	void Count_Vowels_NonVowels() {
		int vowels = 0, non_vowels = 0;
		for (int i = 0;message[i] != '\0';i++) {
			if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u' || message[i] == 'A' || message[i] == 'E' || message[i] == 'I' || message[i] == 'O' || message[i] == 'U') {
				vowels++;
		  }
			else {
				if (message[i] != 32) {
					non_vowels++;
				}
			}
		}
		cout << "\nVowels in String: " << vowels;
		cout << "\nNon Vowels in String: " << non_vowels << endl;
	}
};

class PremiumDecoder : public Decoder {
private:
	string message;
public:
	SuperDecoder* s1 = new SuperDecoder(message);
	PremiumDecoder(string m) : Decoder(m) {

	}
	void setMessage() {
		s1->setMessage();
	}
	void Decode() {
		s1->Decode();
		message = s1->getMessage();
	}
	void CountWords() {
		s1->CountWords();
	}
	void Count_Vowels_NonVowels() {
		s1->Count_Vowels_NonVowels();
	}
	void Reverse() {
		reverse(message.begin(), message.end());
		cout << "Reverse Decoded Message: " << message << endl;
	}
};

void OperateDecoder(Decoder &Instance, Decoder &d, SuperDecoder &s, PremiumDecoder &p) {
	string msg;
	if (&Instance == &d) {
		Decoder* d = new Decoder(msg);
		cout << "\n\n--------------------DECODER--------------------\n\n";
		d->setMessage();
		d->Decode();
	}
	else if (&Instance == &s) {
		SuperDecoder* s = new SuperDecoder(msg);
		cout << "\n\n--------------------SUPERDECODER--------------------\n\n";
		s->setMessage();
		s->Decode();
		s->CountWords();
		s->Count_Vowels_NonVowels();
	}
	else {
		PremiumDecoder* p = new PremiumDecoder(msg);
		cout << "\n\n--------------------PREMIUMDECODER--------------------\n\n";
		p->setMessage();
		p->Decode();
		p->CountWords();
		p->Count_Vowels_NonVowels();
		p->Reverse();
	}
};

int main() {
	string msg;

	Decoder* d = new Decoder(msg);
	SuperDecoder* s = new SuperDecoder(msg);
	PremiumDecoder* p = new PremiumDecoder(msg);
	
	cout << "Function accepting Decorder object and return functionality according to it.";
	OperateDecoder(*d,*d,*s,*p);
	cout <<"\n\nFunction accepting Super Decorder object and return functionality according to it.";
	OperateDecoder(*s, *d, *s, *p);
	cout << "\n\nFunction accepting Premium Decorder object and return functionality according to it.";
	OperateDecoder(*p, *d, *s, *p);

	return 0;
}