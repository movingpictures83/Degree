#ifndef DEGREEPLUGIN_H
#define DEGREEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "csv_parser/csv_parser.cpp"
#include <string>
#include <vector>

class DegreePlugin : public Plugin 
{
  public:    
  std::string toString(){return "Degree";}
  void input(std::string file);
  void run();
  void output(std::string file);

  private:
     float* OrigGraph;
     std::string* bacteria;//[GSIZE];
     int GSIZE;
     std::vector<float> U;   

};


#endif
