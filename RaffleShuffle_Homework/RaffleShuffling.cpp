#include <iostream>
#include <string>
#include <vector>

class Card {
public:
	Card(char type, std::string suit) {
		setCardType(type);
		setCardSuit(suit);
	}

	void setCardType(char type) {
		this->cardType = type;
	}

	void setCardSuit(std::string suit) {
		this->cardSuit = suit;
	}

	char getCardType() {
		return this->cardType;
	}

	std::string getCardSuit() {
		return this->cardSuit;
	}

private:
	char cardType;
	std::string cardSuit;
};
/*
class Deck 
{
public:
	void bringNewDeck() 
	{
		std::vector<Card> cards;
		cards.reserve(52);

		for (int j = 1; j <= 4; j++)
		{
			std::string cardSuit = "";

			if (j == 1)
			{
				cardSuit = " of clubs";
			}
			else if (j == 2)
			{
				cardSuit = " of diamonds";
			}
			else if (j == 3)
			{
				cardSuit = " of hearts";
			}
			else if (j == 4)
			{
				cardSuit = " of spades";
			}

			for (int i = 2; i <= 14; i++)
			{
				char cardType;

				if (i == 10)
				{
					cardType = 'T';
				}
				else if (i == 11)
				{
					cardType = 'J';
				}
				else if (i == 12)
				{
					cardType = 'Q';
				}
				else if (i == 13)
				{
					cardType = 'K';
				}
				else if (i == 14)
				{
					cardType = 'A';
				}
				else
				{
					cardType = char(i + 48);
				}

				Card currentCard(cardType, cardSuit);
				cards.push_back(currentCard);
			}
		}

		//return cards;
	}

	void raffleShuffleDeck(std::vector<Card> newDeck) 
	{
		std::vector<Card> shuffledDeck;
		shuffledDeck.reserve(52);

		for (int i = 0; i < 26; i++)
		{
			shuffledDeck.push_back(newDeck[i]);
			shuffledDeck.push_back(newDeck[i + 26]);
		}

		//return shuffledDeck;
	};

	void showDeck(std::vector<Card> cardsDeck)
	{
		for (Card card : cardsDeck)
		{
			std::cout << card.getCardType() << card.getCardSuit() << std::endl;
		}
	};
};
*/
std::vector<Card> BringNewDeck() {
	std::vector<Card> cards;
	cards.reserve(52);

	for (int j = 1; j <= 4; j++)
	{
		std::string cardSuit = "";

		if (j == 1)
		{
			cardSuit = " of clubs";
		}
		else if (j == 2)
		{
			cardSuit = " of diamonds";
		}
		else if (j == 3)
		{
			cardSuit = " of hearts";
		}
		else if (j == 4)
		{
			cardSuit = " of spades";
		}

		for (int i = 2; i <= 14; i++)
		{
			char cardType;

			if (i == 10)
			{
				cardType = 'T';
			}
			else if (i == 11)
			{
				cardType = 'J';
			}
			else if (i == 12)
			{
				cardType = 'Q';
			}
			else if (i == 13)
			{
				cardType = 'K';
			}
			else if (i == 14)
			{
				cardType = 'A';
			}
			else
			{
				cardType = char(i + 48);
			}

			Card currentCard(cardType, cardSuit);
			cards.push_back(currentCard);
		}
	}

	return cards;
}

std::vector<std::string> ProvideNewDeck()
{
	std::vector<std::string> cards;
	cards.reserve(52);

	std::string cardsArray[52]{};

	int index = 0;

	std::string currentCard;

	for (int j = 1; j <= 4; j++)
	{
		std::string cardSuit = "";

		if (j == 1)
		{
			cardSuit = " of clubs";
		}
		else if (j == 2)
		{
			cardSuit = " of diamonds";
		}
		else if (j == 3)
		{
			cardSuit = " of hearts";
		}
		else if (j == 4)
		{
			cardSuit = " of spades";
		}

		for (int i = 2; i <= 14; i++)
		{
			std::string cardType = "";

			if (i == 11)
			{
				cardType = "J";
			}
			else if (i == 12)
			{
				cardType = "Q";
			}
			else if (i == 13)
			{
				cardType = "K";
			}
			else if (i == 14)
			{
				cardType = "A";
			}
			else
			{
				cardType = std::to_string(i);
			}

			currentCard = cardType + cardSuit;
			cards.push_back(currentCard);
			cardsArray[index] = currentCard;
			index++;
		}
	}

	return cards;
}

std::vector<Card> RaffleShuffle(std::vector<Card> newDeck)
{
	std::vector<Card> shuffledDeck;
	shuffledDeck.reserve(52);

	for (int i = 0; i < 26; i++)
	{
		shuffledDeck.push_back(newDeck[i]);
		shuffledDeck.push_back(newDeck[i + 26]);
	}

	return shuffledDeck;
}

int main()
{
	std::vector<Card> cardsDeck = BringNewDeck();

	for (Card card : cardsDeck) {
		std::cout << card.getCardType() << card.getCardSuit() << std::endl;
	}

	std::cout << "*****************************" << std::endl;

	std::srand(unsigned(std::time(nullptr)));
	int shuffleTimes = std::rand() % 10 + 5;
	//std::cout << shuffleTimes << std::endl;

	for (int i = 0; i < shuffleTimes; i++) {
		cardsDeck = RaffleShuffle(cardsDeck);
	}
	for (Card card : cardsDeck)
	{
		std::cout << card.getCardType() << card.getCardSuit() << std::endl;
	}

	return 0;
}