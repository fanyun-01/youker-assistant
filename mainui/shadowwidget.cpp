/*
 * Copyright (C) 2013 ~ 2015 National University of Defense Technology(NUDT) & Kylin Ltd.
 *
 * Authors:
 *  Kobe Lee    xiangli@ubuntukylin.com/kobe24_lixiang@126.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "shadowwidget.h"
#include <QPainter>

ShadowWidget::ShadowWidget(QWidget *parent) :
    QWidget(parent)
{
    widget_opacity = 1;
}

void ShadowWidget::setOpacity(qreal opacity)
{
    widget_opacity = opacity;
    update();
}

void ShadowWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setOpacity(widget_opacity);
    painter.setBrush(widget_color);
    painter.setPen(Qt::NoPen);
    painter.drawRect(rect());
}
