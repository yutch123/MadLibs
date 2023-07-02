// MadLibs
// Формирует краткую историю на основе пользовательского ввода

#include <string>
#include <iostream>
using namespace std;

string askText(string promt);
int askNumber(string promt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);


int main()
{
  cout << "Weclome to Mad Lib\n\n";
  cout << "Answer the following questions to help create a new story.\n";
  string name = askText("Please enter a name: ");
  string noun = askText("Please enter a plour noun: ");
  int number = askNumber("Please enter a number: ");
  string bodyPart = askText("Please enter a body part: ");
  string verb = askText("Please enter a verb: ");
  tellStory(name, noun, number, bodyPart, verb); // функция принимает всю информацию и должна генерировать сюжет
  return 0;
}

string askText(string promt) // получает от пользователя последовательность символов
{
	string text;
	cout << promt;
	cin >> text;
	return text;
}

int askNumber(string promt)
{
	int num;
	cout << promt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story: \n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day. the ";
	cout << " found the explorer. \n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "prompty devoured ";
	cout << name << ", ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for. ";
}



