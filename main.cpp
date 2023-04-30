#include <iostream>
#include <vector>
struct list {
  std::string name;
  int salary{};
};

int main() {
  std::vector<list> data;
  list person;
  std::string command;
  do {
    std::cout << "Enter <add>. For exit enter <exit>" << std::endl;
    std::cin >> command;
    if (command == "add") {
      std::cout << "Input name: ";
      std::cin >> person.name;
      std::cout << "Input salary:";
      std::cin >> person.salary;
      data.push_back(person);
    }
  } while (command != "exit");
  for (int i = 0; i < data.size(); ++i) {
    std::cout << person.name << " "
              << person.salary << std::endl;
  }
  return 0;
}
