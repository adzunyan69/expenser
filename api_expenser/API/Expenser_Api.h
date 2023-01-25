#include <vector>
#include <list> 

namespace Expenser
{
class Expenser_Api
{
public:
    Expenser_Api() = delete;

    // Expense_Api* create_expense_api(db_file ..., error&)
    //std::list<Expenser::Users> get_users();
    //std::list<Expenser::Expense> get_expense(dates ...);
    //std::list<Expenser::Expense> get_expense(filters ...);
    //std::list<Expenser::Revenue> get_revenue(dates ...);
    //std::list<Expenser::Revenue> get_revenue(filters ...);
    //std::list<Expenser::Debt> get_debt(dates ...);
    //std::list<Expenser::Debt> get_debt(filters ...);
    // bool add_expense(Expense ...)
    // bool add_expense(std::list<Expense> ...)
    // bool add_revenue(Revenue ...)
    // bool add_revenue(std::list<Revenue> ...)
    // bool add_debt(Debt ...)
    // bool add_debt(std::list<Debt> ...) 
    // bool add_user(User ...)
    // bool add_category(Category ...)

    
private:
    // create_expense_api -> singleton or factory 
    // get_users() -> invoke Expense_Impl
    // ...

};

}
