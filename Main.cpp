// MyIntelligentFriend.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
//#include <C:\Users\Scheets\source\repos\MyIntelligentFriend\MyIntelligentFriend\MyIntelligentFriendLibrary.h>

//header stuff

void converseAIuser() {
	std::cout << "Loading data... \a This could take a while.";
	std::ifstream neuralconversecheck101("neuralconverse.txt");
	if (!neuralconversecheck101.is_open()) {
		// Create and open the conversation file
		std::ofstream neuralconversecreate("neuralconverse.txt");

		// Close the conversion file
		neuralconversecreate.close();

		// Create and open the conversation file
		std::ofstream converselogcreate("neurallog2.txt");

		// Close the conversion file
		converselogcreate.close();
	}
	else {

	};

	std::cout << "Note to user: this interface is under developement and does not actually work. Welcome to my brain. This is where you can talk to me. \n Say something to me, type your command, or type help for a list of commands. You can always type quit to quit.";
	std::string converseUserinput;
	std::cin >> converseUserinput;

};

void dictionarycommand505declare() {

};

void dictionarycommand505() {
	dictionarycommand505declare();
	std::string dictcommand505;
	std::cout << "Type your command or type 'help' for help. \n Type 'quit' to return to the home console \n";
	std::cin >> dictcommand505;
	if (dictcommand505 == "help") {
		std::cout << "Commands: \n help \n quit \n def_[word] \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "quit") {
		std::cout << "returning to the home console...";

	}
	else if (dictcommand505 == "def_a") {
		std::cout << "a: \n (adjective) \n 1. An article used to denote uncertanty or denote that the noun it describes is any one of its group. \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_back") {
		std::cout << "back: \n (noun) \n 1. The area or part opposite to the front. \n 2. The reverse side of something \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_cold") {
		std::cout << "cold: \n (adjective) \n 1. Having a low temperature \n 2. Chilled \n 3. Dead \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_definition") {
		std::cout << "definition: \n (noun) \n 1. A statement of properties that make something what it is \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_end") {
		std::cout << "end: \n (noun) \n 1. The state in which all things have passed \n 2. The opposite of the beginning \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_fast") {
		std::cout << "fast: \n (adjective) \n 1. Having the ability to do something in a short amount of time \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_good") {
		std::cout << "good: \n (adjective) \n 1. Not having a large amount of sin \n 2. Having a positive impact on one's enviroment \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_holy") {
		std::cout << "holy: \n (adjective) \n 1. Having been sanctified \n 2. Sacred \n 3. Perfect \n 4. Being a saint \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_invisible") {
		std::cout << "invisible: \n (adjective) \n 1. Not being able to be seen \n 2. Having light refracted around or passing through oneself in a manner in which one cannot be seen \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_jerk") {
		std::cout << "jerk: \n (noun) \n 1. A sudden burst of movement \n 2. One who is overly rude towards his aquaintences \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_king") {
		std::cout << "king: \n (noun) \n 1. One who rules over a kingdom \n 2. Monarch \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_lie") {
		std::cout << "lie: \n (verb) \n 1. To say something that is not true \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_money") {
		std::cout << "money: \n (noun) \n 1. A standard item with which one pays for something \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_need") {
		std::cout << "need: \n (verb) \n 1. To be dependant on something \n 2. To not be able to survive without something \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_other") {
		std::cout << "other: \n (adjective) \n 1. Not being the thing being reffered to \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_pan") {
		std::cout << "pan: \n (noun) \n 1. A large, bowl-shaped cooking utensil \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_quickly") {
		std::cout << "quickly: \n (adverb) \n 1. Doing something in a short amount of time \n";
		dictionarycommand505();
	}
	else if (dictcommand505 == "def_riddle") {
		std::cout << "riddle: \n (noun) \n 1. A story that is not retorical, ussually has a humerous punchline, and has a complicated answer that is hidden in itself \n";
		dictionarycommand505();
	}

};

void mathcommand505() {
	std::string mathinput505;
	std::cout << "Please type what operation you will be preforming [a, s, m, d] or type quit to return to the home console. \n";
	std::cin >> mathinput505;
	if (mathinput505 == "quit") {
		std::cout << "Returning to home console... \n";

	}
	else {
		int mathnumber1;
		int mathnumber2;
		std::cout << "please type the first number \n";
		std::cin >> mathnumber1;
		std::cout << "please type the second number \n";
		std::cin >> mathnumber2;
		std::cout << "the answer is: \n";
		if (mathinput505 == "a") {
			std::cout << mathnumber1 + mathnumber2;
			mathcommand505();
		}
		else if (mathinput505 == "s") {
			std::cout << mathnumber1 - mathnumber2;
			mathcommand505();
		}
		else if (mathinput505 == "m") {
			std::cout << mathnumber1 * mathnumber2;
			mathcommand505();
		}
		else if (mathinput505 == "d") {
			std::cout << mathnumber1 / mathnumber2;
			mathcommand505();
		}
		else {
			std::cout << "Wait a minute! \n You typed an invalid operation.";
			mathcommand505();
		}
	}
}
void commandinterface505() {
	std::string dictcommand505;
	std::string mathinput505;
	std::string commandinput505;
	std::cout << "Type your command or type 'help' for a list of commands. \n";
	std::cin >> commandinput505;
	if (commandinput505 == "help") {
		std::cout << "help \n command_[math, dict, converse]";
		commandinterface505();
	}
	else if (commandinput505 == "command_dict") {
		std::cout << "Entering dictionary console... \n";
		dictionarycommand505();
		if (dictcommand505 == "quit") {
			commandinterface505();
		}
	}
	else if (commandinput505 == "command_math") {
		std::cout << "Entering math console... \n";
		mathcommand505();
		if (mathinput505 == "quit") {
			commandinterface505();
		}
	}
	else if (commandinput505 == "command_converse") {
		std::cout << "Entering conversation Interface...";
		converseAIuser();
	}
};

// setup function library

void Fhappiness101() {
	int Nhappiness101;
	std::string happiness101;
	std::cout << "are you happy today? \n";
	std::cin >> happiness101;

	if (happiness101 == "yes") {
		Nhappiness101 = 1;
	}
	else if (happiness101 == "no") {
		Nhappiness101 = 0;
	}
	else {
		std::cout << "Error! You typed an invalid answer. \n Please try again.";
		Fhappiness101();
	}

	std::ofstream neurallogsetup1("neurallog1.txt");

	neurallogsetup1 << Nhappiness101;

	neurallogsetup1.close();
}

// neural logging function libraries

void Fhappiness202() {
	int Nhappiness202;
	std::string happiness202;
	std::cout << "are you happy today? \n";
	std::cin >> happiness202;

	if (happiness202 == "yes") {
		Nhappiness202 = 1;
	}
	else if (happiness202 == "no") {
		Nhappiness202 = 0;
	}
	else {
		std::cout << "Error! You typed an invalid answer. \n Please try again.";
		Fhappiness202();
	}

	std::fstream neurallogwrite1("neurallog1.txt");


	neurallogwrite1 << Nhappiness202;
	
	neurallogwrite1.close();

}

void setup101() {

	// setup basic stuff

    std::cout << "Hello, I am Your Intelligent Friend!\n This is my command line. \n";

	std::cout << "What do you want my name to be? \n (Note: no spaces can be used) \n";

	std::string MyAIName;

	std::cin >> MyAIName;

	std::cout << "My name is " + MyAIName + "\n";
	
	std::cout << "What is your name? \n (No spaces can be used) \n";

	std::string MyUserName;
	
	std::cin >> MyUserName;

	std::cout << "Hello, " + MyUserName + "\n";
	
	// Create and open the metadata file
	std::ofstream metadatasetupwrite("metadata101.txt");

	// Write to the metadata file
	metadatasetupwrite << "0.0.1 \n" + MyAIName + "\n" + MyUserName;

	// Close the metadata file
	metadatasetupwrite.close();

	Fhappiness101();

}

void startrun101() {
	std::string MyUserNameR;
	std::string MyAINameR;
	std::string trashrunner_R;

	std::ifstream metadatastartrun("metadata101.txt");

	std::getline(metadatastartrun, trashrunner_R);
	std::getline(metadatastartrun, MyAINameR);
	std::getline(metadatastartrun, MyUserNameR);

	metadatastartrun.close();

	std::cout << "Hello! It's me, " + MyAINameR + ".";
	std::cout << "Hello, " + MyUserNameR;
	
	commandinterface505();
}

void startup101() {

	std::cout << "Initilizing 'MyIntelligentFriend' console interface \n";
	std::cout << "Startup [MyIntelligentFriend.exe] \n";
	std::cout << "Checking to see if used=first_time \n";
	std::cout << "Checking for metadata... \n";
	std::cout << "Checking for Neural Network... \n";
	std::ifstream metadatacheck101("metadata101.txt");
	if (!metadatacheck101.is_open()) {
		std::cout << "Metadata not found! \n" << std::endl;
		std::cout << "Assumming Neural Network is non-existent \n";
		std::cout << "Assumming used=first_time \n";
		std::cout << "- Warning! Initilizing setup! \n";
		std::cout << "- Warning! If you have externally overwritten the memory files, this application may be unusable! \n";
		std::cout << "- If this isn't your first time then the memory files may have been deleted! \n";
		std::cout << "Setup initialized \n";
		setup101();
		startrun101();
	} else {
		std::cout << "Metadata found \n";
		std::cout << "Assuming used=first_time: false";
		std::cout << "Warning! If you have externally overwritten the memory files, this application may be unusable! \n";
		std::cout << "Initilizing MyIntelligentFriend from memory \n";
		startrun101();
	};

}

int main()
{
	std::string startupcommand;
	std::cout << "Type 'initilize (console interface)' to initilize console interface \n";
	std::getline(std::cin, startupcommand);
	std::cout << startupcommand + "\n";
	
	if (startupcommand == "initilize (console interface)") {
		startup101();
	} else {
		std::cout << "That is an invalid command! \n";
		main();
	}
}
