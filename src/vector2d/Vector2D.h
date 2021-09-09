
#ifndef DEF_VECTOR2D
#define DEF_VECTOR2D

class Vector2D {
    private:
    
    int m_axisX;
    int m_axisY;
    
    public:

    Vector2D();
    Vector2D(int _axisX, int _axisY);
    ~Vector2D();

    // Getters

    int axisX();
    int axisY();

    // Setters

    void axisX(int _axisX);
    void axisY(int _axisY);

    // Methods

};

#endif