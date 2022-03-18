#ifndef SPREADSHEET_ABSTRACTOBSERVER_H
#define SPREADSHEET_ABSTRACTOBSERVER_H


class AbstractObserver {
public:
    virtual ~AbstractObserver() = default;

    virtual void update() = 0;

    virtual void attach() = 0;

    virtual void detach() = 0;
};


#endif //SPREADSHEET_ABSTRACTOBSERVER_H
