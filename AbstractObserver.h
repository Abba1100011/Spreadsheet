#ifndef SPREADSHEET_ABSTRACTOBSERVER_H
#define SPREADSHEET_ABSTRACTOBSERVER_H


class AbstractSubject;

class AbstractObserver {
public:
    virtual ~AbstractObserver() = default;

    virtual float update() = 0;

    virtual void attach(AbstractSubject *c) = 0;

    virtual void detach(AbstractSubject *c) = 0;

    virtual float getResult() const = 0;
};


#endif //SPREADSHEET_ABSTRACTOBSERVER_H
