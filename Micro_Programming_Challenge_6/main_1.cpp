#include <iostream>
#include <vector>
#include <string>

void print(std::vector<std::string> unique_classes, std::vector<int> students_per_class){
    for (int i = 0; i < unique_classes.size(); i++) {
        std::cout << unique_classes[i] << " " << students_per_class[i] << '\n';
    }
}

void sort_lexicographically(std::vector<std::string> &unique_classes, std::vector<int> &students_per_classes){
    for (int i = 0; i < unique_classes.size(); i++) {
        for (int j = 0; j < unique_classes.size() - 1; j++) {
            if (unique_classes[i] < unique_classes[j]) {
                std::swap(unique_classes[i], unique_classes[j]);
                std::swap(students_per_classes[i], students_per_classes[j]);
            }
        }
    }
}

void class_counter(std::vector<std::string> first_name, std::vector<std::string> last_name, std::vector<std::string> class_name, std::vector<std::string> unique_classes, std::vector<int> &students_per_class){
    for (int i = 0; i < unique_classes.size(); i++) {
        students_per_class.push_back(0);
    }

    for (int i = 0; i < class_name.size(); i++) {
        for (int j = 0; j < unique_classes.size(); j++) {
            if (class_name[i] == unique_classes[j]) {
                students_per_class[j]++;
            }
        }
    }
}

void delete_dupes(std::vector<std::string> &first_name, std::vector<std::string> &last_name, std::vector<std::string> &class_name){
    for (int i = 0; i < first_name.size(); i++) {
        for (int j = 0; j < first_name.size(); j++) {
            if (i != j && first_name[i] == first_name[j] && last_name[i] == last_name[j] && class_name[i] == class_name[j]) {
                first_name.erase(first_name.begin() + j);
                last_name.erase(last_name.begin() + j);
                class_name.erase(class_name.begin() + j);
            }
        }
    }
}

void unique_classes_func(std::vector<std::string> &unique_classes, std::vector<std::string> class_name){
    unique_classes = class_name;

    for (int i = 0; i < unique_classes.size(); i++) {
        for (int j = 0; j < unique_classes.size(); j++) {
            if (i != j && unique_classes[i] == unique_classes [j]) {
                unique_classes.erase(unique_classes.begin() + j);
            }
        }
    }
}

void get_vecs(std::vector<std::string> &first_name, std::vector<std::string> &last_name, std::vector<std::string> &class_name){
    int student_amount;
    std::cin >> student_amount;
    
    for (int i = 0; i < student_amount; i++) {
        std::string temp, temp2, temp3;
        std::cin >> temp >> temp2 >> temp3;
        first_name.push_back(temp);
        last_name.push_back(temp2);
        class_name.push_back(temp3);
    }
}

int main(){
    std::vector<std::string> first_name;
    std::vector<std::string> last_name;
    std::vector<std::string> class_name;
    std::vector<std::string> unique_classes;
    std::vector<int> students_per_class;
    
    get_vecs(first_name, last_name, class_name);
    unique_classes_func(unique_classes, class_name);
    delete_dupes(first_name, last_name, class_name);
    class_counter(first_name, last_name, class_name, unique_classes, students_per_class);
    sort_lexicographically(unique_classes, students_per_class);
    print(unique_classes, students_per_class);
}