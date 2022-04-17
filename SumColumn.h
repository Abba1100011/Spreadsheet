
#ifndef SPREADSHEET_SUMCOLUMN_H
#define SPREADSHEET_SUMCOLUMN_H


#include "OperationColumn.h"
#include "Cell.h"

class SumColumn final : public OperationColumn {
public:
    SumColumn();

    virtual ~SumColumn() override;

    float update() override;

protected:


};


#endif //SPREADSHEET_SUMCOLUMN_H
