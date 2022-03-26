#ifndef SPREADSHEET_ABSTRACTSUBJECT_H
#define SPREADSHEET_ABSTRACTSUBJECT_H


class AbstractSubject {
public:
    virtual ~AbstractSubject() = default;

    virtual void Subscribe() = 0;

    virtual void Unsubscribe() = 0;

    virtual void Notify() = 0;
};


#endif //SPREADSHEET_ABSTRACTSUBJECT_H
