
#ifndef SPREADSHEET_MAXCOLUMN_H
#define SPREADSHEET_MAXCOLUMN_H


#include "OperationColumn.h"
#include "Cell.h"


class MaxColumn final : public OperationColumn {
public:
    MaxColumn();

    virtual ~MaxColumn() final;

    float update() override;

};


#endif //SPREADSHEET_MAXCOLUMN_H
