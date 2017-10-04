class Person
{
    private:
        std::string name;
        std::string strAddress;
    public:
      Person() = default;
      Person(const string &name, const string &add)
      {
          strName = name;
          strAddress = add;
      }
      Person(std::istream &is) {is >> *this;}
    public:
      std::string getName() const { return name; }
      std::string getAddr() const { return address; }
};