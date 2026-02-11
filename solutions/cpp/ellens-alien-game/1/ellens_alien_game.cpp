namespace targets {

    class Alien {
    private:
        int health{3};
    public:
        int x_coordinate;
        int y_coordinate;
        Alien(int x, int y): x_coordinate(x), y_coordinate(y) {}
        
        int get_health() {
            return this->health;
        }

        int hit() {
            if (is_alive())
                --this->health;
            return true;
        }

        int is_alive() {
            return this->health>0;
        }

        int teleport(int x_new, int y_new) {
            this->x_coordinate=x_new;
            this->y_coordinate=y_new;
            return 1;
        }

        int collision_detection(Alien foreign) {
            return (this->x_coordinate==foreign.x_coordinate) && (this->y_coordinate==foreign.y_coordinate);
        }
    };

}  // namespace targets
