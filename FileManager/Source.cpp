#include <iostream>
#include <experimental\filesystem>
int main()
{
	std::experimental::filesystem::path path;
	std::cout << std::experimental::filesystem::current_path().is_absolute() << std::endl;
	system("dir");
	std::string s, c("mkdir ");
	std::cin >> s;
	system((c + s).c_str());
	system("pause");
	return 0;
}