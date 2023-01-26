#include <vector>
#include <list> 
#include "expenser_impl.h"
namespace Expenser
{
class Expenser_Api
{
public:
    Expenser_Api() = delete;

    // Expense_Api* create_expense_api(db_file ..., error&)
    //std::list<Expenser::Users> get_users() const;
    //std::list<Expenser::Expense> get_expense(dates ...) const;
    //std::list<Expenser::Expense> get_expense(filters ...) const;
    //std::list<Expenser::Revenue> get_revenue(dates ...) const;
    //std::list<Expenser::Revenue> get_revenue(filters ...) const;
    //std::list<Expenser::Debt> get_debt(dates ...) const;
    //std::list<Expenser::Debt> get_debt(filters ...) const;
    // std::list<Category> get_category() const;
    // bool add_expense(Expense ...) 
    // bool add_expense(std::list<Expense> ...)
    // bool add_revenue(Revenue ...)
    // bool add_revenue(std::list<Revenue> ...)
    // bool add_debt(Debt ...)
    // bool add_debt(std::list<Debt> ...) 
    // bool add_user(User ...)
    // bool add_category(Category ...)

    // async methods ???
    // bool add_expense(Expense ..., callback function ???)

    
private:
    // create_expense_api -> singleton or factory 
    // get_users() -> invoke Expense_Impl
    // ...

    // std::shared_ptr<Expenser_Impl> expenser_impl{ nullptr }};
    // std::shared_ptr<sqlite3_db> db;


};

}
