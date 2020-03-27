using namespace std;
void displayMenu(); //done
int createNumber(int upper); //done
int createNumber(int lower, int upper); //@Overload
int getChoice(int min, int max); //done
int getNumber(); //done
void doProcess(int answer, int guess); //done
void doProcess(string color, string guessed_color, string nose, string guessed_nose, string body, string guessed_body); //@Overload
int getDecision(); //done

class Robot {
	std::string color;
	std::string nose;
	std::string body;
public:
	Robot(std::string newColor, std::string newNose, std::string newBody);
	std::string getColor();
	void setColor(std::string newColor);
	std::string getNose();
	void setNose(std::string newNose);
	std::string getBody();
	void setBody(std::string newBody);
};