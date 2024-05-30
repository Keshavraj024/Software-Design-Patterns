#pragma once

class IDocument
{
public:
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void save() = 0;
};