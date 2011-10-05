#ifndef POLISHSTATE_H 
#define POLISHSTATE_H 

#include <vector>
#include "OutputState.h"
#include "constants.h"
#include "Coordinate.h"


class PolishState : public OutputState {

  public:

    static PolishState* getInstance();

    virtual void writeHeader(std::ostream &out) const;
    virtual void writeFooter(std::ostream &out) const;

    //! Use this method to write out an airspace.
    virtual void write(std::ostream& stream, const Airspace& airspace) const;

    //! Helper method to write out an airspace
    virtual void write(std::ostream& stream, const Circle* circle) const;
    virtual void write(std::ostream& stream, const CurvedPolygon* curved_polygon) const;


//    virtual void write(std::ostream &out, const Airspace& s) const;
//    virtual void write(std::ostream &out, const Polygon& p, const std::string &label) const;
  
  private:

    void write(std::ostream& out, const Coordinate& c) const;
    void write(std::ostream& stream, const std::vector<Coordinate>& coords) const;

  protected:

    PolishState();

  private:

    static PolishState* _instance;

    std::string getType(const std::string& airspaceClass) const;

};

#endif /* POLISHSTATE_H */
