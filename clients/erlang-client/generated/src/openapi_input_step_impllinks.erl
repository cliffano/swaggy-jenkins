-module(openapi_input_step_impllinks).

-export([encode/1]).

-export_type([openapi_input_step_impllinks/0]).

-type openapi_input_step_impllinks() ::
    #{ 'self' => openapi_link:openapi_link(),
       '_class' => binary()
     }.

encode(#{ 'self' := Self,
          '_class' := Class
        }) ->
    #{ 'self' => Self,
       '_class' => Class
     }.
