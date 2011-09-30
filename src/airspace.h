#ifndef AIRSPACE_H
#define AIRSPACE_H

#include <string>
#include <vector>
#include "polygon.h"
#include "circle.h"
#include "arc.h"
#include "coordinate.h"

class AirSpace {

  private:
    std::string name;
    std::string clss;

    // TODO: probably, these should change to doubles (representing stuff in metres).
    std::string ceiling;
    std::string floor;

    // TODO: change this to the class structure I discussed with Yves.
    //   Region
    //     Circle
    //     CurvedPolygon
    //        Segment
    //          Arc Point
    Polygon polygon;
    Circle circle;
    Arc arc;

    // TODO: change this to a vector with Labels.  Each label has a
    // text and a coordinate.
    std::vector<Coordinate> labelCoordinates;

  public:

    AirSpace();

    const std::string& getName() const;
    const std::string& getClass() const;
    const std::string& getCeiling() const;
    const std::string& getFloor() const;
    const Polygon& getPolygon() const;
    Polygon& getPolygon();
    const Circle& getCircle() const;
    Circle& getCircle();
    const Arc& getArc() const;
    Arc& getArc();

    void setName(const std::string& mystring);
    void setClass(const std::string& clss);
    void setCeiling(const std::string& ceiling);
    void setFloor(const std::string& floor);

    bool hasPolygon() const;
    bool hasCircle() const;
    void addLabelCoordinate(const Coordinate& c);
    void clear();

    friend std::ostream& operator <<(std::ostream& outputStream, const AirSpace& l);

};

#endif /* AIRSPACE_H */
