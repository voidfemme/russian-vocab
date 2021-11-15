All-in-one Russian vocabulary flashcard program.

Description:	1. Program reads a series of inputs, and creates a csv to store the data
		2. User should be able to: 
			add new fields on the fly, and determine input type for each field.
			access two different modes: "write" and "drill".
			modify current flashcard, in order to correct mistakes.

"Welcome message"
	Welcome message is the main menu of this program. From here, you will be able to
	enter one of the game's two modes. This can be accessed in two ways: starting
	the program, and by entering the the sentinel value to exit either write or drill
	mode

"Write" mode:
	In write mode, the user will be prompted to input information for each word.
	There are three types of fields: "mandatoryBasic", "mandatoryPartOfSpeech".
	"mandatory" fields include:
		int partOfSpeech
		string basicRussianForm
		string englishTranslation
		int pageNumber
		cin.getline(string tags)
	
	partOfSpeech is an int type, and uses a number to index the part of speech.
	depending on the index, this will then prompt the user to enter the corresponding
	
	"mandatoryPartOfSpeech" fields:
		PartOfSpeech() will create a csv file which catalogues each part of 
		speech, and its associated mandatory fields.
		every time a new part of speech is added, a new CSV is created for
		that type of speech, with it's own input rules.

"drill mode"
	In drill mode, the user will be shown a message with a russian or english word,
	and will be asked one of several randomly selected fields associated with that 
	word. During each input, the user can enter the answer, or one of two sentinel
	values which will either give the user access to edit that entry, or to return
	to the "Welcome Message". 

Necessary Files:
	parts_of_speech.csv
	<part_of_speech>.csv
