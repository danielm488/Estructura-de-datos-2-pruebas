#include <iostream>
#include<fstream>
#include<cstdint>

struct BitmapInfoHeader
{
    uint32_t file_size;
    uint16_t res1;
    uint16_t res2;
    uint32_t offset;
    uint32_t header_size;
    uint32_t bmp_width;
    uint32_t bmp_height;
    uint16_t bmp_planes;
    uint16_t bmp_bpp;
    uint32_t bmp_comp;
    uint32_t bmp_img_size;
    uint32_t bmp_horiz_res;
    uint32_t bmp_vert_res;
    uint32_t bmp_pal_colors;
    uint32_t bmp_imp_colors;
    uint32_t extra[17];
} __attribute__((packed));

struct PNGInfoHeader
{
    char id[6];
    uint32_t file_size;
    uint16_t res1;
    uint16_t res2;
    uint32_t offset;
    uint32_t header_size;
    uint32_t bmp_width;
    uint32_t bmp_height;
    uint16_t bmp_planes;
    uint16_t bmp_bpp;
    uint32_t bmp_comp;
    uint32_t bmp_img_size;
    uint32_t bmp_horiz_res;
    uint32_t bmp_vert_res;
    uint32_t bmp_pal_colors;
    uint32_t bmp_imp_colors;
    uint32_t extra[17];
} __attribute__((packed));


int main(int argc, char *argv[])
{

    char magicbyte[2];

    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input file>\n";
        return 1;
    }

    std::ifstream file(argv[1]);

    if(!file.is_open())
    {
        std::cerr<<"Cannot open file!! "<<argv[1]<<"\n";
        return 2;
    }

    file.read(magicbyte,2);

    std::cout<<"Magic Bytes:"<<magicbyte[0]
             <<magicbyte[1]<<"\n";
    
    if(file.gcount()!=sizeof(magicbyte))
    {
        std::cerr<<"Not a BMP file\n";
    }
    else
    {
        if(magicbyte[0]==0x42 && magicbyte[1]==0x4D)
        {   
            BitmapInfoHeader bitmapinfo;
            file.read(reinterpret_cast<char *>(& bitmapinfo),sizeof(bitmapinfo));
            std::cout<<"Valid BMP "<<"\n";
            std::cout<<"Size: "<<bitmapinfo.file_size<< "\n";
            std::cout<<"Offset: "<<bitmapinfo.offset<<" \n";
            std::cout<<"Size: "<<bitmapinfo.bmp_img_size<<" \n";
            std::cout<<"Width: "<<bitmapinfo.bmp_height<<" \n";
            std::cout<<"Height: "<<bitmapinfo.bmp_width<<" \n\n";

        }else if(magicbyte[0]=='B' && magicbyte[1]=='M')
        {
            /* code */
        }
        
       
    } 

    
    file.close();

    return 0;
}
