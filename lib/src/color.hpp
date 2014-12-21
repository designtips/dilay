#ifndef DILAY_COLOR
#define DILAY_COLOR

#include <glm/fwd.hpp>
#include <iosfwd>

class QColor;

class Color {
  public: 
    Color (float,float,float,float);
    Color ();
    Color (float,float,float);
    Color (const glm::vec3&);
    Color (const glm::vec4&);
    // copies and scales a color using `scale`
    Color (const Color&, float);

    static Color black ();
    static Color white ();
    static Color red   ();
    static Color green ();
    static Color blue  ();

    float r          () const;
    float g          () const;
    float b          () const;
    float opacity    () const;

    void  r          (float);
    void  g          (float);
    void  b          (float);
    void  opacity    (float);

    // `scale` does not scale opacity
    void  scale      (float);

    glm::vec3 vec3   () const;
    glm::vec4 vec4   () const;
    QColor    qColor () const;

  private:
    float _r;
    float _g;
    float _b;
    float _opacity;
};

std::ostream& operator<<(std::ostream&, const Color&);

#endif
