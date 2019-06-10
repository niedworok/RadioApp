#ifndef REQUESTSDATA_H
#define REQUESTSDATA_H

#include <QObject>
#include <QJsonObject>

class RadioStation
{

public:
    enum ObjectKeys {
        Name,
        Url,
        Bitrate,
        Country,
        IsFavorite
    };
    explicit RadioStation(QJsonObject jsonObject, bool favorite = false);

    //getters
    QJsonObject getObject() const;
    QString getValue(ObjectKeys key);

    //setter
    void setFavorite(bool favorite);



private:
    QJsonObject jsonObject;
};

#endif // REQUESTSDATA_H
