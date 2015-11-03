//	Tyler Mulley
//	11/3/2015
//	Steganography.h
//	this file provides the declaration and implementation for the steganography
//	class and its many members.

#include <BMP_Handler.h>
#include <vector>
#include <string>

using std::string;


class Steganography{
	
private:
	int height;
	int width;
	BMP_Handler bmpHandle;
	unsigned char* bmpString;
public:
	void load(const char * fileName){
		bmpString = bmpHandle.loadBMP(fileName, width, height);
	}
	void save(const char * filename){
		bmpHandle.saveBMP(filename, bmpString, width, height);
	}

	void writeOut(const char* text, int size, int dialSetting){
		
		for (int i = 0; i < size; i++){
			for(int j = 0; j < 8; j++){
				// change mask based on location of bit
				int maskChar = 1 << (7 - j);
				if(text[i] & maskChar){
					//find byte to update, mask byte with one at location told by dial setting
					bmpString[(8*i + j)/ dialSetting] = bmpString[(8*i + j)/ dialSetting] | 1 << ((8*i + j) % dialSetting);
				}
				else{
					bmpString[(8*i + j)/ dialSetting] = ~(bmpString[(8*i + j)/ dialSetting]) | 1 << ((8*i + j) % dialSetting);
					bmpString[(8*i + j)/ dialSetting] = ~(bmpString[(8*i + j)/ dialSetting]);
				}
			}
		}
	}
	string readOut(int ds){
		string toReturn = "";
		char currentChar = 0;
		int counter = 0;
		int bitCount = 0;
		
		while (1){
			for (int i = 0 ; i < 8; i++){
				int maskChar = 1 << (bitCount % ds);
				if (bmpString[bitCount/ds] & maskChar){
					currentChar = currentChar | 1 << (7 - i); 
				}
				else{
					currentChar = ~currentChar | 1 << (7 - i); 
					currentChar = ~currentChar;
				}
				bitCount++;
			}
			if(counter == 0 && currentChar != '#'){
				return "No message found.";
			}
			if(currentChar == 0){
				return toReturn;
			}
			if(currentChar != '#') toReturn+= currentChar;
			currentChar = 0;
			counter++;

		}

		
		
	}



	// getters/setters
	int getWidth(){return width;}
	int getHeight(){return height;}
	
};