#include <Rcpp.h>
#include <iostream>
#include <fstream>
using namespace Rcpp;


//[[Rcpp::export]]
int count_lines(std::string filename) {
  int count = 0;
  std::string line;
  
  // Creating input filestream  
  std::ifstream file(filename);
  while(std::getline(file, line)){
    count++;
    }
  return count;
  }

// [[Rcpp::export]]
std::vector<std::string> strsplit_c(std::string line, char delim){
  std::vector<std::string> line_content;
  std::stringstream linestream(line);
  for(std::string data; std::getline(linestream, data, delim); ){
    data.erase( std::remove(data.begin(), data.end(), '\\'), data.end() );
    line_content.push_back(data);
    }
  return line_content;
  }


// [[Rcpp::export]]
CharacterMatrix readbig(std::string filename, char delim = '\t', int nlines = 0) {

  // update number of lines
  if(nlines == 0){
    nlines = count_lines(filename);
    }

  // open new pipe
  std::ifstream file(filename);

  // create containers
  std::string line;
  std::string data;

  // read first line
  std::getline(file, line);
  std::vector< std::string> lin = strsplit_c(line, delim);
  
  // create output
  int ncol = lin.size();
  
  CharacterMatrix table(nlines, ncol);
  for(int i = 0; i < ncol; ++i){
    table(0,i) = lin[i];
    }

  // iterate over table
  for(int i = 1; i < nlines; ++i){
    std::getline(file, line);
    lin = strsplit_c(line, delim);
    for(int j = 0; j < ncol; ++j){
      table(i,j) = lin[j];
      }
    }

  return table;
  }

