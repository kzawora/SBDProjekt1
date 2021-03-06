#include <iostream>
#include <vector>
#pragma once
class Record {
    std::vector<double> values;

  public:
    Record();

    explicit Record(std::vector<double> x);
    bool IsEmpty();

    void Push(double val);
    size_t Size();
    std::vector<double> GetValues();
    bool operator<(const Record &) const;
    bool operator>(const Record &) const;
    bool operator<=(const Record &) const;
    bool operator>=(const Record &) const;
    bool operator==(const Record &) const;
    bool operator!=(const Record &) const;

    friend std::ostream &operator<<(std::ostream &, const Record &);
};
