#ifndef SWEET_LALR_LEXERTRANSITION_HPP_INCLUDED
#define SWEET_LALR_LEXERTRANSITION_HPP_INCLUDED

namespace sweet
{

namespace lalr
{

class LexerState;
class LexerAction;

/**
// A transition in a lexical analyzer's state machine.
*/
class LexerTransition
{
public:
    int begin; ///< The first character that the transition can be made on.
    int end; ///< One past the last character that the transition can be made on.
    const LexerState* state; ///< The state that is transitioned to.
    const LexerAction* action; ///< The action that is taken on the transition or null if no action is taken.

    bool is_on_character( int character ) const;
};

}

}

#endif