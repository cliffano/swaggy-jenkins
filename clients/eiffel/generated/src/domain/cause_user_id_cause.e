note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 1.0.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class CAUSE_USER_ID_CAUSE 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    short_description: detachable STRING_32 
      
    user_id: detachable STRING_32 
      
    user_name: detachable STRING_32 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_short_description (a_name: like short_description)
        -- Set 'short_description' with 'a_name'.
      do
        short_description := a_name
      ensure
        short_description_set: short_description = a_name		
      end

    set_user_id (a_name: like user_id)
        -- Set 'user_id' with 'a_name'.
      do
        user_id := a_name
      ensure
        user_id_set: user_id = a_name		
      end

    set_user_name (a_name: like user_name)
        -- Set 'user_name' with 'a_name'.
      do
        user_name := a_name
      ensure
        user_name_set: user_name = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass CAUSE_USER_ID_CAUSE%N")
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached short_description as l_short_description then
          Result.append ("%Nshort_description:")
          Result.append (l_short_description.out)
          Result.append ("%N")    
        end  
        if attached user_id as l_user_id then
          Result.append ("%Nuser_id:")
          Result.append (l_user_id.out)
          Result.append ("%N")    
        end  
        if attached user_name as l_user_name then
          Result.append ("%Nuser_name:")
          Result.append (l_user_name.out)
          Result.append ("%N")    
        end  
      end
end


