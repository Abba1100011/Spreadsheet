
#ifndef SPREADSHEET_MINCOLUMN_H
#define SPREADSHEET_MINCOLUMN_H


#include "OperationColumn.h"
#include "Cell.h"

class MinColumn final : public OperationColumn {
public:
    MinColumn();

    virtual ~MinColumn() final;

    float update() override;

protected:
};

#endif //SPREADSHEET_MINCOLUMN_H
