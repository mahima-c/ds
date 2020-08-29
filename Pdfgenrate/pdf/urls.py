
from django.contrib import admin
from .views import render_pdf_view,CustomerList,customer_render_pdf_views
from django.urls import path
from . import views
from django.conf.urls import url

app_name='customers'

urlpatterns = [
    path('', CustomerList.as_view(),name="customer_list"),
    path('test/', render_pdf_view,name="test-view"),
    path('pdf/<pk>/', customer_render_pdf_views,name="customer_render_pdf_views"),
]
