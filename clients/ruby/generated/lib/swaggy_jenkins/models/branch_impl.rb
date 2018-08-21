=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.2.1-SNAPSHOT

=end

require 'date'

module SwaggyJenkinsClient
  class BranchImpl
    attr_accessor :_class

    attr_accessor :display_name

    attr_accessor :estimated_duration_in_millis

    attr_accessor :full_display_name

    attr_accessor :full_name

    attr_accessor :name

    attr_accessor :organization

    attr_accessor :parameters

    attr_accessor :permissions

    attr_accessor :weather_score

    attr_accessor :pull_request

    attr_accessor :_links

    attr_accessor :latest_run

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'_class' => :'_class',
        :'display_name' => :'displayName',
        :'estimated_duration_in_millis' => :'estimatedDurationInMillis',
        :'full_display_name' => :'fullDisplayName',
        :'full_name' => :'fullName',
        :'name' => :'name',
        :'organization' => :'organization',
        :'parameters' => :'parameters',
        :'permissions' => :'permissions',
        :'weather_score' => :'weatherScore',
        :'pull_request' => :'pullRequest',
        :'_links' => :'_links',
        :'latest_run' => :'latestRun'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'_class' => :'String',
        :'display_name' => :'String',
        :'estimated_duration_in_millis' => :'Integer',
        :'full_display_name' => :'String',
        :'full_name' => :'String',
        :'name' => :'String',
        :'organization' => :'String',
        :'parameters' => :'Array<StringParameterDefinition>',
        :'permissions' => :'BranchImplpermissions',
        :'weather_score' => :'Integer',
        :'pull_request' => :'String',
        :'_links' => :'BranchImpllinks',
        :'latest_run' => :'PipelineRunImpl'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      return unless attributes.is_a?(Hash)

      # convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h| h[k.to_sym] = v }

      if attributes.has_key?(:'_class')
        self._class = attributes[:'_class']
      end

      if attributes.has_key?(:'displayName')
        self.display_name = attributes[:'displayName']
      end

      if attributes.has_key?(:'estimatedDurationInMillis')
        self.estimated_duration_in_millis = attributes[:'estimatedDurationInMillis']
      end

      if attributes.has_key?(:'fullDisplayName')
        self.full_display_name = attributes[:'fullDisplayName']
      end

      if attributes.has_key?(:'fullName')
        self.full_name = attributes[:'fullName']
      end

      if attributes.has_key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.has_key?(:'organization')
        self.organization = attributes[:'organization']
      end

      if attributes.has_key?(:'parameters')
        if (value = attributes[:'parameters']).is_a?(Array)
          self.parameters = value
        end
      end

      if attributes.has_key?(:'permissions')
        self.permissions = attributes[:'permissions']
      end

      if attributes.has_key?(:'weatherScore')
        self.weather_score = attributes[:'weatherScore']
      end

      if attributes.has_key?(:'pullRequest')
        self.pull_request = attributes[:'pullRequest']
      end

      if attributes.has_key?(:'_links')
        self._links = attributes[:'_links']
      end

      if attributes.has_key?(:'latestRun')
        self.latest_run = attributes[:'latestRun']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          _class == o._class &&
          display_name == o.display_name &&
          estimated_duration_in_millis == o.estimated_duration_in_millis &&
          full_display_name == o.full_display_name &&
          full_name == o.full_name &&
          name == o.name &&
          organization == o.organization &&
          parameters == o.parameters &&
          permissions == o.permissions &&
          weather_score == o.weather_score &&
          pull_request == o.pull_request &&
          _links == o._links &&
          latest_run == o.latest_run
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Fixnum] Hash code
    def hash
      [_class, display_name, estimated_duration_in_millis, full_display_name, full_name, name, organization, parameters, permissions, weather_score, pull_request, _links, latest_run].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :BOOLEAN
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        temp_model = SwaggyJenkinsClient.const_get(type).new
        temp_model.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
