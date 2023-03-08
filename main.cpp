#include <iostream>
//#include <cctype>
#include <conio.c>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

char email[254];
//int length = sizeof(email);
	
	
 bool isFirstPositionNumber(int position){

 	if(isdigit(email[position]) ){
 		return true;
	 }else{
	 	return false;
	 }
	 
 }
 
 bool IsAllowCharacterInThisPosition(int position, const char character){
 	if(email[position]==character){
 		return true;
	 }else{
	 	return false;
	 }
 }
  
 bool isSameCharFollowOther(const char firstCharacter, const char secondCharacter){
 	bool state = false;
 	int length = strlen(email);
 	for(int increment = 0 ; increment <= length; increment++){
 		if(email[increment] == firstCharacter){
 			for(int count = increment ; count <= (increment + 1) ; count++){
 				if(email[count] == secondCharacter && count != increment){
 					state = true;
 					count = increment + 1;
 					increment = length;
				 }
			 }
		 }
	 }
	 return state;
 }
 void table(int state, char errorMsg[]){
	int length = strlen(email);
	cout<<endl<<"\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf";
		cout<<endl<<"\xb3\t\t\t\t\xb3\t\t\t\t\t\t\t\xb3";
		cout<<endl<<"\xb3\t\t\t\t\xb3\t\t\t\t\t\t\t\xb3";
		
		if(state == 0 ){
			
			cout<<endl<<"\xb3 EMAIL VALIDO\t\t\t\xb3\t";
			textbackground(10);
			cout<<email;
			textbackground(14);
			if(length <= 30){
				cout<<"\t\t\t\t\xb3";
			}else{
				cout<<"\t\t\t\xb3";
			}
			
		}else{
			
			cout<<endl<<"\xb3 EMAIL INVALIDO\t\t\xb3\t";
			textbackground(4);
			cout<<" "<<email<<" ";
			textbackground(14);
			if(length <= 30){
				cout<<"\t\t\t\t\xb3";
			}else{
				cout<<"\t\t\t\xb3";
			}
			
			
		}
		//(state == 0 )? cout<<endl<<"\xb3 EMAIL VALIDO\t\t\t\xb3\t"<<email<<"\t\t\t\xb3" : cout<<endl<<"\xb3 EMAIL INVALIDO\t\t\xb3\t"<<email<<"\t\t\t\xb3";
		//cout<<endl<<"\xb3\t"<<isValid<"\t\t\t\xb3\t"<<email<<"\t\t\t\xb3";
		cout<<endl<<"\xb3\t\t\t\t\xb3\t\t\t\t\t\t\t\xb3";
		cout<<endl<<"\xb3\t\t\t\t\xb3\t\t\t\t\t\t\t\xb3";
	cout<<endl<<"\xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4";	
		cout<<endl<<"\xb3";
		if(state==0){
			textcolor(10);
			cout<<errorMsg;
			textcolor(0);
			cout<<"\t\t\t\t\t\t\t";
			
		}else{
			textcolor(4);
			cout<<errorMsg;
			textcolor(0);
			cout<<"\t\t\t\t\t\t\t";
			
		}
		cout<<"\xb3";
		
	cout<<endl<<"\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9"<<endl;			
}
 
 
 
 bool notAllowCharacter(){
 	bool state = false;
 	int length = strlen(email);
 	for(int increment = 0; increment <= length; increment++){
 		if(email[increment] == '!'){
 			state = true;
 			increment = length;
		 }else if(email[increment] == '*'){
		 	state = true;
 			increment = length; 	
		 }else if(email[increment] == ','){
		 	state = true;
 			increment = length; 	
		 }
		 else if(email[increment] == '#'){
		 	state = true;
 			increment = length;	 	
		 }else if(email[increment] == '%'){
		 	state = true;
 			increment = length;
		 	
		 }
		 else if(email[increment] == '§'){
		 	state = true;
 			increment = length;
		 	
		 }
		 else if(email[increment] == '$'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '['){
 			state = true;
 			increment = length;
		 }else if(email[increment] == ']'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '{'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '}'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '('){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == ')'){
 			state = true;
 			increment = length;
		 }else if(email[increment] == '/'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '|'){
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '!'){ /* para \ */
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '+'){
		 	state = true;
 			increment = length;
 		}else if(email[increment] == '='){
		 	state = true;
 			increment = length;
		 
		 }else if(email[increment] == '´'){
 			state = true;
 			increment = length;
		 }else if(email[increment] == '`'){
		 	state = true;
 			increment = length;
		 	
		 }else if(email[increment] == '?'){
		 	state = true;
 			increment = length;
		 	
		 }	 
		 else if(email[increment] == ';'){
 			state = true;
 			increment = length;
		 }
		 else if(email[increment] == ':'){
 			state = true;
 			increment = length;
		 }
		 else if(email[increment] == '<'){
 			state = true;
 			increment = length;
		 }
		 else if(email[increment] == '>'){
 			state = true;
 			increment = length;
		 }
		 else if(email[increment] == '^'){
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '~'){
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '"'){
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '€'){
		 	state = true;
 			increment = length;
		 }else if(email[increment] == '£'){
		 	state = true;
 			increment = length;
		 }
		 else if(email[increment] == '«'){
		 	state = true;
 			increment = length;
		 }
		 else if(email[increment] == '»'){
		 	state = true;
 			increment = length;
		 }
		 else if(email[increment] == '-'){
		 	state = true;
 			increment = length;
		 }else{
		 	state = false;
		 }
	 }
	 
	 return state;
 }
 
 int findPositionForAnyCharacter(const char character){
 	int length = strlen(email);
 	int position = 0;
	for(int increment = 0; increment <= length; increment++){
		if(email[increment] == character){
			position = increment;
			increment = length;
		}
	}
	return position;
 }
 
 bool findLetterWithAccentuation(){
 	bool state = false;
 	int length = strlen(email);
 	
 	for(int increment = 0; increment <= length; increment++){
 			if(isalpha(email[increment]) == 0){
 				state = true;
				 cout<<	isalpha(email[increment]);
				 increment = length;
			}else{
			 	state = false;
			}
			 
	 }
	 return state;
 }
 bool firtPartOfEmailUsernameFindInregularCharacter(int stop, const char character){
 	bool state = false; 
 	for(int increment = 0; increment <= stop; increment++){
 		if(email[increment] == character){
 			state = true;
		 }
	 }
	 
	 return state;
 }
 
 int isSpaceBlank(){
 	char analiseOneByOne;
 	int length = strlen(email);
 	int countBlankSpace = 0;
 	for(int increment = 0; increment <= length; increment++){
 		analiseOneByOne = email[increment];
 		if (isspace(analiseOneByOne)){
 			countBlankSpace++;
		}
	 }
	 return countBlankSpace;
 }
 
int howManyAtIsInEmail (const char At){
	int stop = strlen(email);
	int count = 0;
	for(int increment = 0; increment <= stop; increment++){
		if(email[increment] == At){  // is count = 1 existe apenas um @, count = 0 nao existe @, count > 1 existe mais de um @
			count++;
		}
	}
	return count;
}

bool AtIsInFirstPosition(const char character){
	bool state = false;
	for(int increment = 0; increment <= 2; increment++){
		if(email[increment] == character){
			state = true;
		}
	}
	return state;
}

bool IsAccentuationInEmil(){
	bool state = false;
	/*
	int length = strlen(email);
	const char accentuationArray[] = {'à', 'á', 'â', 'ã', 'ñ', 'ç', 'é', 'è', 'ê', 'í', 'ì', 'î', 'ó', 'ò', 'ô', 'õ', 'ú', 'ù', 'û'};
	
	int lengthAccentuationArray = strlen(accentuationArray);
	
	for(int increment = 0 ; increment <= length; increment++){
		for(int run = 0; run <= lengthAccentuationArray; run++){
			char* ch;
			//char* c;
			const char x = email[increment];
			//strcpy(ch,x);
			const char y = accentuationArray[run];
			//cout<<ch<<endl;
		//	c = accentuationArray[run];
			//cout<<c<<endl;
			//strcpy(ch, email[increment]);
			//strcpy(c, accentuationArray[run]);
			//char c = 'a';
			//char ch='b';
			//string c = convertToString(x);
			//cout<<convertToString(x)<<endl;
			//cout<<convertToString(y)<<endl;
			//cout<<"à"<<endl;
			//run = lengthAccentuationArray;
			//increment = length;
			//ch = convertToString(x);
			int result = strcmp(convertToString(x).c_str(), convertToString(y).c_str());
			cout<<result<<endl;
			if(result == 0){
				cout<<result<<endl;
				state = true;
				run = lengthAccentuationArray;
				increment = length;
			}
		}
	}*/
	return state;
}

bool findPointInDomaninName(int start, const char character){
	bool state = false;
	int length = strlen(email);
	for(int increment = start; increment <= length; increment++){
		if(email[increment] == character && increment != start && increment != strlen(email)){
			return true;
		}
	}
	
	return state;
}


bool isLowerCase(){
	int length = strlen(email);
	bool state = false;
	for(int increment = 0; increment<=length; increment++){
		if(isupper(email[increment])){
			state = true;
			increment = length;
		}
	}
	
	return state;
}


int verifyEmail(){
	int stateofError = 0;
	bool state = false;
	int end = findPositionForAnyCharacter('@') + 1;
	
	if(isFirstPositionNumber(0)){
		state = false;
		return stateofError = 1;	
	}else{
		state = true;
	}
	//cout<<IsAccentuationInEmil()<<endl;
	if(IsAccentuationInEmil() == true && state == true){
		state = false;
		return stateofError = 2;
	}else{
		state = true;
	}
	
	if(IsAllowCharacterInThisPosition(0, '.') && state == true){
		state = false;
		return stateofError = 3;
		
	}else if(IsAllowCharacterInThisPosition(0, '_') && state == true){
		return stateofError = 3;
	}else{
		state = true;
	}
	
	if(notAllowCharacter() == false && state == true){
		state = true;
	}else{
		return stateofError = 4;
	}
	
	//Codigo 5 existe espaco em branco no email
	if(isSpaceBlank() == 0 && state == true){
		state == true;
	}else{
		return stateofError = 5; 
	}
	
	if(howManyAtIsInEmail('@') == 1 && state == true)
	{
		state == true; //exist apenas um @ no email
	}
	else if(howManyAtIsInEmail('@') == 0 && state == true)
	{
		return stateofError = 6; //Nao existe nenhum @ no email
	}
	else{
		return stateofError = 7; // Existe mais de um @ no email
	}
	
	
	if(AtIsInFirstPosition('@') && state == true){
		return stateofError = 8;
	}else{
		state = true;
	}
	
	if(isSameCharFollowOther('.', '.') && state == true){
		return stateofError = 9;
	}else{
		state = true;
	}
	if(isSameCharFollowOther('_', '_') && state == true){
		return stateofError = 10;
	}else{
		state = true;
	}
	/*
	if(firtPartOfEmailUsernameFindInregularCharacter(end, '-') && state == true){
		return stateofError = 11;
	}else{
		state = true;
	}
	*/
	
	if(IsAllowCharacterInThisPosition(end, '_') && state == true){
		return stateofError = 11;
	}else if(IsAllowCharacterInThisPosition(strlen(email) - 1, '_') && state == true){
		return stateofError = 12;
	}
	else if(IsAllowCharacterInThisPosition(end, '.') || IsAllowCharacterInThisPosition(strlen(email) - 1, '.') && state == true){
		return stateofError = 13;
	}
	 
	
	if(isSameCharFollowOther('.', '_') && state){
		return stateofError = 14;
	}
	else if(isSameCharFollowOther('_', '.') && state){
		return stateofError = 15;
	}
	else{
		state = true;
	}
	
	if(findPointInDomaninName(end, '.') && state){
		state = true;
	}else{
		return stateofError = 16;
	}
	
	if(IsAllowCharacterInThisPosition(end - 2, '.') && state == true){
		return stateofError = 17;
	}else if(IsAllowCharacterInThisPosition(end - 2, '_') && state == true){
		return stateofError = 18;
	}
	else {
		state = true;
	}
	
	if(isLowerCase() == true && state){
		return stateofError = 19;
	}else{
		state = true;
	}
	
	if(stateofError == 0){
		return stateofError;
	}
	
	
		
}

void header(){
	system("color E0");
	textcolor(10);
	cout<<endl<<"\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf";
	cout<<endl<<"\xb3\t VERIFICADOR DE EMAIL  \t\t\xb3";
	cout<<endl<<"\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9";
	textcolor(0);
}


int main(int argc, char** argv) {
	
	int stateOfError = 0;
	bool isContinue = false;
	char isAbort;
	
	do {
		header();
		do{
			fflush(stdin);
			cout<<endl<<"DIGITE O SEU EMAIL:\t";
			cin.getline(email, 64);
			fflush(stdin);
			if(strlen(email) <= 0){
				cout<<"EMAIL ESTA VAZIO!"<<endl;
			}
		}while(strlen(email) <= 0);
		
		stateOfError = verifyEmail();
		
			/*
		1 - stateofError: Na priemria posicao contem um numero
		2 - stateofError: LETRAS ACENTUADAS 
		3 - stateofError: O EMAIL DEVE COMEÇAR COM LETRAS
		3 - stateofError: Email de começar com letras
		4 - stateofError: Email com characteres especial
		5 - stateofError: Email contem espacos em branco
		6 - stateofError: NAO EXISTE NENHUM @ NO EMAIL
		7 - stateofError: TEM MAIS DE UM @ NO EMAIL
		8 - stateofError: @ FOI ENCONTRADO NAS 3 PRIMEIRAS POSICOES
		9 - stateofError: EXISTE UM . A SEGUIR O OUTRO . EXEMPLO: ..
		10 - stateofError: NO SEU EMAIL EXISTE UM (-) A SEGUIR O OUTRO
		11 - stateofError: NOME DO DOMINIO NAO PODE COMECAR (_)
		12 - stateofError: NOME DO DOMINIO NAO PODE TERMINAR (_)
		13 - stateofError: NOME DO DOMINIO NAO PODE COMECAR NEM TERMINA COM (.)
		14 - stateofError: NAO DEVE TER UM  (.)SEGUIDO DE UM (_)
		15 - stateofError: NAO DEVE TER UM (_) SEGUIDO DE UM (.)
		16 - stateofError: O CARACTER ANTERIOR AO AROBA NAO PODE (.)
		16 - stateofError: NAO ENCONTRADO (.) NO NOME DE DOMINIO
		
		*/
		char errorMsg[64];
		switch(stateOfError){
			case 0:
				strcpy(errorMsg, "EMAIL VALIDO!");
			break;
			case 1:
				strcpy(errorMsg, "O EMAIL DEVE COMECAR COM UMA LETRA FOI ENCONTRAR UM NUMERO!");
			break;
			case 2:
				strcpy(errorMsg, "O EMAIL NAO PODE TER LETRAS ACENTUADAS");
			break;
			case 3:
				 strcpy(errorMsg, "O EMAIL DEVE COMEÇAR COM LETRAS");
			break;
			case 4:
				strcpy(errorMsg, "NO EMAIL EXISTEM CHARACTERES NAO PERMITIDOS");
			break;
			case 5:
				strcpy(errorMsg, "O EMAIL CONTEM ESPACO EM BRANCO");
				//char errorMsg[] = "O EMAIL CONTEM ESPACO EM BRANCO";
			break;
			case 6:
				strcpy(errorMsg, "NAO EXSITE @ NO SEU EMAIL");
				//char errorMsg[] = "NAO EXSITE @ NO SEU EMAIL";
			break;
			case 7:
				strcpy(errorMsg, "EXISTE MAIS DE UM @ NO TEU EMAIL");
				//char errorMsg[] = "EXISTE MAIS DE UM @ NO TEU EMAIL";
			break;
			case 8:
				strcpy(errorMsg, "O @ FOI COLOCADO NUMA DAS TRES PRIMEIRAS POSICOES");
				 //char errorMsg[] = "O @ FOI COLOCADO NUMA DAS TRES PRIMEIRAS POSICOES";
			break;
			case 9:
				strcpy(errorMsg, "NO SEU EMAIL EXISTE UM PONTO A SEGUIR O OUTRO");

			break;
			case 10:
				strcpy(errorMsg, "NO SEU EMAIL EXISTE UM (_) A SEGUIR O OUTRO");

			break;
			case 11:
				strcpy(errorMsg, "NOME DO DOMINIO NAO PODE COMECAR (_)");
			break;
			case 12:
				strcpy(errorMsg, "NOME DO DOMINIO NAO PODE TERMINAR (_)");
				//char errorMsg[] = "";
			break;
			case 13:
				strcpy(errorMsg, "NOME DO DOMINIO NAO PODE COMECAR NEM TERMINAR COM (.)");
				//char errorMsg[] = "";
			break;
			case 14:
				strcpy(errorMsg, "NAO DEVE TER UM (.) SEGUIDO DE UM (_)");
				//char errorMsg[] = "";
			break;
			case 15:
				strcpy(errorMsg, "NAO DEVE TER UM (_) SEGUIDO DE UM (.)");
				//strcpy(errorMsg, "LETRAS NAO PODEM ESTAR EM MAIUSCULA");
				//char errorMsg[] = "";
			break;
			case 16:
				strcpy(errorMsg, "FALTOU PONTO NO NOME DE DOMINIO");
				//char errorMsg[] = "";
			break;
			case 17:
				strcpy(errorMsg, "O CARACTER ANTERIOR AO AROBA NAO PODE SER (.)");
	
			break;
			case 18:
				strcpy(errorMsg, "O CARACTER ANTERIOR AO AROBA NAO PODE SER (_)");
				//char errorMsg[] = "";
			break;
			case 19:
				strcpy(errorMsg, "EMAIL CONTEM LETRA MAIUSCULA");
				//char errorMsg[] = "";
			break;
			default:
				cout<<"EMAIL VALIDO"<<endl;
			break;
		}
		system("color E0");
		table(stateOfError, errorMsg);
		
	
	cout<<"DESEJA CONTINUAR A TESTAR EMAILS (S) SE DESEJA SAIR (N)?"<<endl;
	cin>>isAbort;	
	switch(isAbort){
		case 's':
		case 'S':
			isContinue = true;
		break;
		case 'n':
		case 'N':
			isContinue = false;
		break;
		default:
			isContinue = false;
		break;
	}
		if(isContinue == false){
			cout<<"ESCOLHEU TERMINAR"<<endl;
			
		}
		system("pause");
		system("cls");
	
	}while(isContinue == true);
	
	
	return 0;
}
