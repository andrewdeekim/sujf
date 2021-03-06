#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

/**
 * @class Score
 * @brief The Score class updates the score as enemies are destroyed.
 */
class Score: public QGraphicsTextItem {
public:
    Score(QGraphicsItem* parent = 0);
    void increase_score();
    int get_score();

private:
    int score;
};

#endif // SCORE_H
