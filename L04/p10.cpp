// Menu system.

#include <iostream>

void print_menu(char menus[][20], int size)
{
    // Print menus in menus.
    for (int i = 0; i < size; i++)
        std::cout << i + 1 << ". " << menus[i] << std::endl;
    std::cout << "Enter your menu: ";
}

int get_menu_number(char menus[][20], int size)
{
    // Revieve user input and check if it is valid input or not.
    // If the input is not valid, return =1.
    int choice;
    std::cin >> choice;
    if (1 <= choice && choice <= size)
        return choice;
    return -1;
}

void print_selected_menu(char menus[][20], int size, int input)
{
    if (input == size)
    {
        std::cout << "Exit...\n\n";
        // Uncomment this if you want to exit this program when user input is exit.
        //goto end;
        return;
    }
    std::cout << "\nYour menu: " << menus[input - 1] << "\n\n";
}

int main(void)
{
    // Array for menu and its size.
    char menus[][20] = { "Hamburger", "Cheese burger", "Sandwich", "Exit" };
    int size = sizeof(menus) / sizeof(menus[0]);

    // Keep repeating selecting menu system.
    while (true)
    {
        // Print menu and receive user input.
        print_menu(menus, size);
        int choice;
        // Use while condidtion insted of while (true) and if statement.
        while ((choice = get_menu_number(menus, size)) == -1)
        {
            std::cout << std::endl;
            print_menu(menus, size);
        }
        print_selected_menu(menus, size, choice);
    }

    // Uncomment this if you want to exit program when user input is exit.
    //end:
    return 0;
}