/********************************************************************
 * 
 ********************************************************************/

 #include <iostream>
 #include <string>


int main()
{
   std::string name;

   std::cout  << "Enter your name: " << std::flush;
   
   std::cin >> name;

   std::cout  << "Hello "<< name << ", nice to meet you!" << std::endl;
   return 0;
}
