// calss 'Plane'

#include <iostream>

class Plane
{
    // 1.
    // Declare member variables as private; default setting of memeber variable is private, not public.
    int id, num_passengers;
    char *model;

    public:
        // 2.
        // Constructor for this class.
        Plane(int id_, int num_passengers_, char *model_)
        {
            id = id_;
            num_passengers = num_passengers_;
            model = model_;
        }

        // 3.
        // Alternative constructor for this class.
        Plane(int id_, int num_passengers_)
        {
            id = id_;
            num_passengers = num_passengers_;
            model = (char*)"Default Model";
        }

        // Alternative constructor for this class.
        // Constructor with no arguments, set all variables as default.
        Plane()
        {
            id = 0;
            num_passengers = 0;
            model = (char*)"Default Model";
        }

        // 4,
        // Print current class status.
        void print()
        {
            std::cout << "ID: " << id << "\n";
            std::cout << "Number of passengers: " << num_passengers << "\n";
            std::cout << "Model: " << model << "\n";
        }
};

int main()
{
    Plane defaultPlane;
    Plane defaultModel(1, 0);
    Plane p(2, 50, (char*)"Name1");

    defaultPlane.print();
    std::cout << "\n";
    defaultModel.print();
    std::cout << "\n";
    p.print();

    return 0;
}