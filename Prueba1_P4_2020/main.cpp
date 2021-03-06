#include <iostream>
#include<fstream>
#include<cstdint>

struct BMPfileHeader
{
    char id[2];
    uint32_t size;
    uint16_t res1;
    uint16_t res2;
    uint32_t offsetof;
    uint32_t res3;
    uint32_t ancho;
    uint32_t alto;



}__attribute__((packed));

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input file>\n";
        return 1;
    }

    std::ifstream file(argv[1]);

    //verificando que este abierto
    if(!file.is_open())
    {
        std::cerr<<"Cannot open file!! "<<argv[1]<<"\n";
        return 2;
    }

    BMPfileHeader bmpfile;

    file.read(reinterpret_cast<char *>(&bmpfile),sizeof(bmpfile));
    
    if(file.gcount()!=sizeof(bmpfile))
    {
        file.close();
        std::ifstream file(argv[1]);
        char buffer[2];
        int size;
        int ancho;
        int alto;

        file.read(buffer,2);
        file.read(reinterpret_cast<char *>(&size),2);
        file.read(reinterpret_cast<char *>(&ancho),2);
        file.read(reinterpret_cast<char *>(&alto),2);
        
         if (argc != 2)
        {
            std::cerr << "Usage: " << argv[0] << " <input file>\n";
            return 1;
        }

       
           if(buffer[0]=='I' && buffer[1]=='n')
        {   
            std::cout<<"Valid BMP: "<<buffer[0]<<buffer[1]<<"\n";
            std::cout<<"BMP size: "<<size<<"\n";
            std::cout<<"BMP ancho: "<<ancho<<"\n";
            std::cout<<"BMP alto: "<<alto<<"\n";

        }
        
    }
    else
    {
            if(bmpfile.id[0]=='V' && bmpfile.id[1]=='a')
        {   
            std::cout<<"Valid BMP: "<<bmpfile.id[0]<<bmpfile.id[1]<<"\n";
            std::cout<<"BMP size: "<<bmpfile.size<<"\n";
            std::cout<<"BMP ancho: "<<bmpfile.ancho<<"\n";
            std::cout<<"BMP alto: "<<bmpfile.alto<<"\n";

        }
        else
        {
            std::cerr<<"Not a BMP file\n";

        }
    } 

    
    file.close();

    return 0;
}
