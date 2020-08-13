#include<iostream>
#include<fstream>
#include "bmp.h"

int main(int argc, char *argv[])
{
    std::ifstream file(argv[0]);

    if(!file.is_open())
    {
        std::cerr<<"Cannot open file!! \n"<<argv[1]<<"\n";
    }

    BitmapFileHeader bmpfile;
    BitmapInfoHeader bmpinheader;

    file.read(reinterpret_cast<char *>(&bmpfile),sizeof(bmpfile));

    if(file.gcount()!=sizeof(bmpfile))
    {  
        std::cerr<<"Not a BMP file\n";     
    }
    else
    {
        file.read(reinterpret_cast<char *>(&bmpinheader),sizeof(BitmapFileHeader));
        unsigned long tam=bmpfile.file_size-bmpinheader.header_size;
        static uint32_t row_size=((bmpinheader.bmp_bpp*bmpinheader.bmp_width)/32)*4;
        int count;
        while (count<bmpinheader.bmp_height)
        {

            for(int x=0;0<row_size;x++)
            {
                uint32_t val;
                file.read(reinterpret_cast<char *>(&val),tam);
                
            }
            count++;
        }
        
        std::cout<<"Tamano de la imagen es: "<<tam<<" \n";
        std::cout<<"Valid "<<bmpfile.id[0]<<bmpfile.id[1]<<" \n";
        std::cout<<"Size: "<<bmpfile.file_size<< "\n";
        std::cout<<"Offset: "<<bmpfile.offset<<" \n";
        std::cout<<"color palett: "<<bmpinheader.bmp_pal_colors<<" \n";

    }
       


    return 0;
}