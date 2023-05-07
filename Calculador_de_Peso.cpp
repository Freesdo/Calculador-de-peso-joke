#include <iostream>
#include <thread>
#include <chrono>
#include <map>
#include <ctime>
#include <fstream>
using std::cout;
using std::cin;

void imprima_peso(int& a){
	char cc=178;
    std::string eitastr{cc};
    std::map<int,std::string> mapa;
    mapa[1]="Carregando...";
    mapa[2]="Calculando...";
    mapa[3]="Perguntando ao chat gpt como faz isso...";
    mapa[4]="Acessando e alterando  C:\\Windows\\security...";
    mapa[5]="Conectando remotamente este computador a 2001:DB8:AD:F:0:0:0:1...";
    mapa[6]="Acessando arquivos da pasta user...";
    mapa[7]="Encriptando dados...";
    mapa[8]="Area de trabalho...";
    mapa[9]="??? ?? ???? ???? ?? ?????? ???\a";
    mapa[10]="?¨∞???π‰¶¥ø~6Ú·3^?A\a \a \a";
    mapa[11]="Encrypted files and sent as a copy to the desktop...\a";
    mapa[12]="Calculando...";
    mapa[13]="Calculando...";
    mapa[14]="retrieving information from C:\\Users\\Admin...";
    mapa[15]="Fetching...";
    mapa[16]="Fetching...";
    mapa[17]="Calculando...";
    mapa[18]="Recolhendo ultimas informacoes do peso...";
    mapa[19]="Utilizando as equacoes corretas...";
    mapa[20]="O computador foi comprometido? \a";
    mapa[22]="Pronto!";
    std::srand(std::time(nullptr));
    std::string desktopPath = std::getenv("USERPROFILE");
    desktopPath += "\\Desktop\\";
    std::ofstream file;
    char randomx;
    file.open(desktopPath+"eC516123XZ35S14D1651D32AC1.txt");
    if(!file.is_open()){
    	file.close();
    	desktopPath.clear();
    	desktopPath=std::getenv("USERPROFILE\\¡rea de Trabalho\\");
    	file.open(desktopPath+"SARC741C6at5zAT15.txt");
    	if(!file.is_open()){
    	file.close();
    	desktopPath.clear();
    	desktopPath=std::getenv("USERPROFILE\\One Drive¡rea de Trabalho\\");
    	file.open(desktopPath+"SA231RC741C6at5zAT15.txt");
		}
	}
	file.close();
	std::string newstring{"[                     ]"};
	for(std::size_t i{1};i<22;++i){
		newstring.replace(i,1,eitastr);	
		cout<<newstring<<" "<<mapa[i]<<'\n'<<'\n';
		std::this_thread::sleep_for(std::chrono::seconds(std::rand()%6));	
		if(i==7){
				
    	for(std::size_t i{};i<30000;++i){
		randomx=std::rand()%127;
		std::cout<<randomx;
	}
	system("cls");
    for (std::size_t j = 0; j < 55; ++j) {
    	randomx=std::rand()%127;
        std::string filePath = desktopPath + "J56aCA654CASFh4z3zhO59CCFFSADSAF648AS819CAB551VAQ115CAF16Q141ACC57T432.txt";
        std::string A;
        A.push_back(randomx);
        filePath.insert(24+j, A);
        
        std::ofstream file(filePath);
        if (file.is_open()) {
            std::string no_arquivo;
            for (std::size_t h = 0; h < 2000; ++h) {
                char randomChar = static_cast<char>(std::rand() % 127);
                no_arquivo.push_back(randomChar);
                if (h == 15 || h == 40 || h == 68 || h == 85) {
                    no_arquivo.push_back('\n');
                }
            }
            file << no_arquivo;
            file.close();
        }
        A.clear();
    }
		}
		system("cls");
	}	
	cout<<"\nSeu peso equivale a "<<a<<"!!\n\n";
}



int main(){
	int x{};
	cout<<"--BEM VINDO AO CALCULADOR DE PESO--\n\ndigite o seu peso: ";
	cin>>x;
	imprima_peso(x);
	system("pause");
	return 0;
}
