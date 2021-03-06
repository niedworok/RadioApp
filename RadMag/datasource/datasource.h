#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QString>

class DataSource
{
public:

    enum Resources {
        Play,
        Stop,
        Search,
    };

    enum Filters {
        Name,
        Country,
        Language,
    };

    DataSource();

    QString static resource(Resources resourceString);
    QString static radioFiltered(Filters filter = DataSource::Name);
    Filters static typeOfFilter(QString filterName);
};

#endif // DATASOURCE_H
