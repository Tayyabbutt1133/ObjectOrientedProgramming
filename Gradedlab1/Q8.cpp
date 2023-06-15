#include<iostream>
#include<string>
using namespace std;


class card
{
private:
	string card_suit;
	int card_no;
	string face;
public:
	card() {};
	card(string cs,int cn, string f )
	{
		card_suit = cs;
		card_no = cn;
		face = f;
	}
	//function calling
	void getter();
	void setter();
};
void card::getter()
{
	
	cout << "Enter Card Suit:" << endl;
	cin >> card_suit;
	cout << "Enter Card Number:" << endl;
	cin >> card_no;
	cout << "Enter Card Face:" << endl;
	cin >> face;

}
void card::setter()
{
	cout << "Card Suit is:" << card_suit << endl;
	cout << "Card Number is:" << card_no << endl;
	if (card_suit=="diamond"||card_no==2)
	{
		cout << "Card Suit color is Red" << endl;
	}
	else if (card_suit=="hearts"|| card_no==3)
	{
		cout << "Card Suit color is Red" << endl;
	}
	else if (card_suit=="spades"|| card_no==4)
	{
		cout << "Card Suit color is Black" << endl;
	}
	else
	{
		cout << "Card Suit color is Black" << endl;
	}
	cout << "Card Face is:" << face<<endl;
}

int main()
{
	card player1, player2, player3, player4, player5;
	cout << "Player 1 Turn:" << endl;
	player1.getter();
	cout << "Player 1 Result:" << endl;
	player1.setter();
	cout << endl;
	cout << "Player 2 Turn:" << endl;
	player2.getter();
	cout << "Player 2 Results:" << endl;
	player2.setter();
	cout << endl;
	cout << "Player 3 Turn:" << endl;
	player3.getter();
	cout << "Player 3 Results:" << endl;
	player3.setter();
	cout << endl;
	cout << "Player 4 Turn:" << endl;
	player4.getter();
	cout << "Player 4 Results:" << endl;
	player4.setter();
	cout << endl;
	cout << "Player 5 Turn:" << endl;
	player5.getter();
	cout << "Player 5 Results:" << endl;
	player5.setter();
}